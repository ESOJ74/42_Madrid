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

int		ft_sort_dict_f_normal(t_dict_entry *a, t_dict_entry *b)
{
	return (a->normal > b->normal);
}

int		ft_sort_dict_f_value(t_dict_entry *a, t_dict_entry *b)
{
	return (a->value > b->value);
}
