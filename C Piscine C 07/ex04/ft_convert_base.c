/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_convert_base                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_length(char *str);
int		num_length(unsigned int number, int rad, int negative);
int	is_space(char c);
int	is_base_valid(char *str);

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

char	*ft_buffer_base(char *base, unsigned int num, int neg)
{
	int		i;
	int		rad;
	int		length;
	char	*string;

	rad = ft_str_length(base);
	length = num_length(num, rad, neg);
	string = (char *)malloc((length + 1));
	if (!(string))
		return (0);
	if (neg)
		string[0] = '-';
	i = 0;
	if (neg)
		i = 1;
	while (i < length)
	{
		string[length - (!neg) - i++] = base[num % rad];
		num /= rad;
	}
	string[length] = '\0';
	return (string);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				rad;
	int				min;
	int				res;
	int				neg;
	unsigned int	result;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	rad = ft_str_length(base_from);
	result = 0;
	min = 1;
	while (is_space(*nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*(nbr++) == '-')
			min *= -1;
	}
	while (resolve_base(base_from, *nbr) != -1)
	{
		res = resolve_base(base_from, *nbr);
		result *= rad;
		result += res;
		nbr++;
	}
	if (result == 0)
		min = 1;
	neg = 1;
	if (min > 0)
		neg = 1;
		
	return (ft_buffer_base(base_to, result, neg));
}
