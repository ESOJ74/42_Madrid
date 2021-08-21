/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_dictionary_io.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:                                          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "ft_number_dictionary.h"

t_parse_error	ft_process_line(t_dict_entry *entry, char *line, unsigned int length);

char	*ft_str_join(int size, char **strs, char *sep);
char	*ft_str_n_duplicate(char *src, int n);
int		ft_str_length(char *str);
unsigned long	ft_atoi(char *str);

int	ft_is_number(char c);
char	**ft_split_whitespace(char *str);

char	*ft_extend_array(char *orig, char *n_cont, unsigned int old_len, unsigned int len);
int		ft_open_file(char *path);
int		ft_close_file(int fd);

void			ft_read_line(t_dict_entry *entry, int fd, t_parse_error *error)
{
    printf("Se entra en la funcion ft_read_line del fichero ft_number_dictionary_io.c\n");
    char			buffer[1];
	char			*line;
	unsigned int			byte_read;
	unsigned int			total;

	total = 0;
	while ((byte_read = read(fd, buffer, 1)) > 0)
	{
		if (byte_read == (unsigned int)-1)
		{
			entry->str = 0;
			*error = failed;
			break ;
		}
		line = ft_extend_array(line, buffer, total, total + byte_read);
        
        printf("ft_extend_array devuelve line = %s\n",line);
		total += byte_read;
		if (buffer[0] == '\n')
		{
			*error = ft_process_line(entry, line, total);
			byte_read = (unsigned int)-2;
			break ;
		}
	}
	if (byte_read == 0)
		*error = reached_eof;
}

char			*ft_clean_line(char *str)
{
    printf("Se entra en la funcion ft_clean_line del fichero ft_number_dictionary_io.c\n");
    int		size;
	char	**split;

	split = ft_split_whitespace(str);
	free(str);
	size = 0;
	while (split[size])
		size++;
	return (ft_str_join(size, split, " "));
}

t_parse_error	ft_process_line(t_dict_entry *entry, char *line, unsigned int length)
{
    printf("Se entra en la funcion ft_process_line del fichero ft_number_dictionary_io.c\n");
    unsigned int	index;
	char	*number;

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

int				ft_count_valid_line(char *path)
{
    printf("Se entra en la funcion ft_count_valid_line del fichero ft_number_dictionary_io.c\n path = %s\n",path);
    int				fd;
	int				count;
	t_dict_entry	*entry;
	t_parse_error	error;

	fd = ft_open_file(path);
    printf("open_file devuelve fd = %d\n",fd);
	if (fd < 0)
		return (INVALID);
	count = 0;
	while (1)
	{
		error = parsing_ok;
		if (!(entry = malloc(sizeof(t_dict_entry))))
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
	ft_close_file(fd);
	return (count);
}

int			ft_load_valid_line(char *path, int size, t_dict *dict)
{
    printf("Se entra en la funcion ft_load_valid_line del fichero ft_number_dictionary_io.c\n");
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
