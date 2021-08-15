/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	string(char c, char *str)
{
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int	space(char c)
{
	return (string(c, "\t\n\v\f\r "));
}

int	operator(char c)
{
	return (string(c, "+-"));
}

int	number(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (space(*str))
		str++;
	while (operator(*str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (number(*str))
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * sign);
}
