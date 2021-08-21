/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:                                          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_number_dictionary.h"

void	ft_str_write_to(int fd, char *str);

int		ft_resolve_dict_entry_index(t_dict *dict, unsigned long number)
{
	int		index;

	index = 0;
	while (index < dict->size)
	{
		if (dict->entries[index].value == number)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_itow_is_value_power_of_ten(unsigned long number)
{
	unsigned long		power;

	power = 1;
	while (power <= number)
	{
		if (power == number)
			return (1);
		power *= 10;
	}
	return (0);
}

void	ft_itow_print_if(int print, int *put_space, char *str)
{
	if (!print)
		return ;
	if (*put_space)
		ft_str_write_to(1, " ");
	*put_space = 1;
	ft_str_write_to(1,str);
}

int	ft_itow_short(t_dict *dict, unsigned long number, int *put_sp, int prnt)
{
	int		dict_index;

	dict_index = ft_resolve_dict_entry_index(dict, number);
	if (dict_index == -1)
		return (0);
	ft_itow_print_if(prnt, put_sp, dict->entries[dict_index].str);
	return (1);
}

int	ft_itow(t_dict *dict, unsigned long number, int *put_space, int print)
{
	int		index;
	unsigned long	mult;
	unsigned long	value;

	if ((number <= 20 && ft_itow_short(dict, number, 0, 0))
			|| (ft_resolve_dict_entry_index(dict, number) != -1
					&& !ft_itow_is_value_power_of_ten(number)))
		return (ft_itow_short(dict, number, put_space, print));
	index = dict->size - 1;
	while ((value = dict->entries[index].value) != 0)
	{
		if (number % value != number)
		{
			mult = number / value;
			if (value > 99)
				if (!ft_itow(dict, mult, put_space, print))
					return (0);
			ft_itow_print_if(print, put_space, dict->entries[index].str);
			if (number - mult * value == 0)
				return (1);
			return (ft_itow(dict, number - mult * value, put_space, print));
		}
		index--;
	}
	return (1);
}
