/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_dictionary.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:                                          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_number_dictionary.h"

void			ft_sort_dictionary(t_dict *dict);
int			ft_count_valid_line(char *path);
int			ft_load_valid_line(char *path, int size, t_dict *dict);

t_dict	ft_load_dictionary(char *path)
{
    printf("se entra en la funcion ft_load_dictionary del fichero ft_number_dictionary.c\n");
    int				size;
	t_dict_entry	*entries;
	t_dict			dict;

	dict = (t_dict){path, 0, 0, 0};
	size = ft_count_valid_line(path);
	if (size == INVALID)
		return (dict);
	if (!(entries = malloc((size + 1) * sizeof(t_dict_entry))))
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
    printf("se entra en la funcion ft_load_default_dictionary del fichero ft_number_dictionary.c\n");
    return (ft_load_dictionary(ENGLISH_DICT));
}

void	ft_free_dictionary(t_dict *dict)
{
    printf("se entra en la funcion ft_free_dictionary del fichero ft_number_dictionary.c\n");
    int		index;

	index = 0;
	while (index < dict->size)
	{
		free(dict->entries[index].str);
		index++;
	}
}
