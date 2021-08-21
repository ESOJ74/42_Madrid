/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_dictionary_sort2.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:                                          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number_dictionary.h"
#include<stdio.h>
int		ft_sort_dict_f_normal(t_dict_entry *a, t_dict_entry *b)
{
    printf("se entra en la funcion ft_sort_dict_f_normal del fichero ft_number_dictionary_sort2.c\n");
	return (a->normal > b->normal);
}

int		ft_sort_dict_f_value(t_dict_entry *a, t_dict_entry *b)
{
    printf("se entra en la funcion ft_sort_dict_f_value del fichero ft_number_dictionary_sort2.c\n");
    return (a->value > b->value);
}
