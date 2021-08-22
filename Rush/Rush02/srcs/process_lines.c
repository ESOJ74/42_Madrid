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
#include "ft_number_dictionary.h"

void			ft_read_line(t_dict_entry *entry, int fd, t_parse_error *error);
char			*ft_str_join(int size, char **strs, char *sep);
char			*ft_str_n_duplicate(char *src, int n);
int				ft_str_length(char *str);
unsigned long	ft_atoi(char *str);
char			**ft_split_whitespace(char *str);
int				ft_open_file(char *path);
int				ft_close_file(int fd);

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_clean_line(char *str)
{
	int		size;
	char	**split;

	split = ft_split_whitespace(str);
	free(str);
	size = 0;
	while (split[size])
		size++;
	return (ft_str_join(size, split, " "));
}

t_parse_error	ft_process_line(t_dict_entry *entry, \
	char *line, unsigned int length)
{
	unsigned int	index;
	char			*number;

	index = 0;
	while (ft_is_number(line[index]))
		index++;
	if (line[index] == '\n')
		return (empty_line);
	if (index == 0 || index >= length)
		return (failed);
	number = ft_str_n_duplicate(line, index);
	while (line[index] == ' ')
		index++;
	if (line[index] != ':')
		return (failed);
	index++;
	while (line[index] == ' ')
		index++;
	entry->value = ft_atoi(number);
	entry->str = ft_clean_line(
			ft_str_n_duplicate(line + index, length - index - 1));
	if (ft_str_length(entry->str) == 0)
		return (failed);
	free(number);
	return (parsing_ok);
}

int	ft_load_valid_line(char *path, int size, t_dict *dict)
{
	int				fd;
	int				index;
	t_dict_entry	*entry;
	t_parse_error	error;

	fd = ft_open_file(path);
	if (fd < 0)
		return (0);
	index = 0;
	while (index < size)
	{
		error = parsing_ok;
		entry = &dict->entries[index];
		ft_read_line(entry, fd, &error);
		if (error == failed)
			return (0);
		if (error == parsing_ok)
			index++;
		if ((entry->str == 0 || error == reached_eof) && error != empty_line)
			break ;
	}
	ft_close_file(fd);
	return (1);
}
