/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_dictionary_io.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_number_dictionary.h"

char			*ft_array(char *o, char *n, unsigned int l, unsigned int len);
t_parse_error	ft_process_line(t_dict_entry *entry, char *l, unsigned int le);

void	ft_read_line(t_dict_entry *entry, int fd, t_parse_error *error)
{
	char			buffer[1];
	char			*line;
	unsigned int	byte_read;
	unsigned int	total;

	total = 0;
	byte_read = read(fd, buffer, 1);
	while (byte_read > 0)
	{
		if (byte_read == (unsigned int) - 1)
		{
			entry->str = 0;
			*error = failed;
			break ;
		}
		line = ft_array(line, buffer, total, total + byte_read);
		total += byte_read;
		if (buffer[0] == '\n')
		{
			*error = ft_process_line(entry, line, total);
			byte_read = (unsigned int) - 2;
			break ;
		}
		byte_read = read(fd, buffer, 1);
	}
}

int	ft_open_file(char *path)
{
	return (open(path, O_RDONLY));
}

int	ft_close_file(int fd)
{
	return (close(fd));
}

int	ft_count_valid_line(int fd)
{
	int				count;
	t_dict_entry	*entry;
	t_parse_error	error;

	if (fd < 0)
		return (INVALID);
	count = 0;
	while (1)
	{
		error = parsing_ok;
		entry = malloc(sizeof(t_dict_entry));
		if (!(entry))
			return (INVALID);
		ft_read_line(entry, fd, &error);
		if (error == failed)
			return (INVALID);
		if (error == parsing_ok)
			count++;
		if (entry->str == 0 || error == reached_eof)
			break ;
		free(entry);
	}
	return (count);
}
