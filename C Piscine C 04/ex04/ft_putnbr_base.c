/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	string(char c, char *str)
{
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int	is_base(char *str)
{
	char	*curr;
	int		i;
	int		j;

	curr = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (0);
	while (*curr)
	{
		if (string(*curr, "\t\n\v\f\r "))
			return (0);
		curr++;		
	}
	i = 0;
	while (i < curr - str)
	{
		j = i + 1;
		while (j < curr - str)
			if (str[i] == str[j++])
				return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base_recursive(int nbr, char *base, int len)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_base_recursive(nbr / len, base, len);
		write(1, &(base[-(nbr % len)]), 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-nbr, base, len);
		return ;
	}
	if (nbr > len - 1)
		ft_putnbr_base_recursive(nbr / len, base, len);
	write(1, &(base[nbr % len]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (!is_base(base))
		return ;
	len = ft_strlen(base);
	ft_putnbr_base_recursive(nbr, base, len);
}
