/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_show_tab                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_stock_str.h"

void				ft_put_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void				ft_put_number(int num)
{
	if (num > 9)
		ft_put_number(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

void				ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_put_string(par[i].str);
		ft_put_string("\n");
		ft_put_number(par[i].size);
		ft_put_string("\n");
		ft_put_string(par[i].copy);
		ft_put_string("\n");
		i++;
	}
}
