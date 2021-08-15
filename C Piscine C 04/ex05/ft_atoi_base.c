/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base                                       :+:      :+:    :+:   */
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

int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
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
		if (is_space(*curr) || *curr == '+' || *curr == '-')
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

int		resolve_base(char *base, char match)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == match)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	len;
	int	res;
	int	sign;
	int	resolved;

	if (!is_base(base))
		return (0);
	len = ft_strlen(base);
	res = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (resolve_base(base, *str) != -1)
	{
		resolved = resolve_base(base, *str);
		res *= len;
		res += resolved;
		str++;
	}
	return (res * sign);
}
