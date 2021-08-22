/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_dictionary.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_number_dictionary.h"

void	ft_sort_dictionary(t_dict *dict);
int		ft_count_valid_line(int fd);
int		ft_load_valid_line(char *path, int size, t_dict *dict);
int		ft_open_file(char *path);
int		ft_close_file(int fd);

t_dict	ft_load_dictionary(char *path)
{
	int				size;
	int				fd;
	t_dict_entry	*entries;
	t_dict			dict;

	dict = (t_dict){path, 0, 0, 0};
	fd = ft_open_file(path);
	size = ft_count_valid_line(fd);
	ft_close_file(fd);
	if (size == INVALID)
		return (dict);
	entries = malloc((size + 1) * sizeof(t_dict_entry));
	if (!(entries))
		return (dict);
	dict.size = size;
	dict.entries = entries;
	dict.valid = ft_load_valid_line(path, size, &dict);
	if (dict.valid)
		ft_sort_dictionary(&dict);
	return (dict);
}

t_dict	ft_load_default_dictionary(void)
{
	return (ft_load_dictionary(ENGLISH_DICT));
}

void	ft_free_dictionary(t_dict *dict)
{
	int	index;

	index = 0;
	while (index < dict->size)
	{
		free(dict->entries[index].str);
		index++;
	}
}
