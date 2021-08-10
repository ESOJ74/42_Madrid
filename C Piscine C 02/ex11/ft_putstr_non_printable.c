/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_digit_hex(char c)
{
	if (c < 10)
		ft_putchar('0' + c);	
	else
		ft_putchar('a' - 10 + c);
}

void	print(char c)
{
	if ((c >= 32) && (c <= 126))
		ft_putchar(c);
	else
	{
		if (c < 0)
			c = c + 256;
		ft_putchar('\\');
		ft_digit_hex(c / 16);
		ft_digit_hex(c % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
		print(*(str++));
}
