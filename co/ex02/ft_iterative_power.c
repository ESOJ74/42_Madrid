/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:40:14 by rsoto-in          #+#    #+#             */
/*   Updated: 2021/08/11 00:00:01 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	pwr;
	int	sign;

	n = nb;
	sign = 1;
	if (nb < 0 && power % 2 != 0)
		sign = -1;
	if (nb < 0)
		n = nb * -1;
	pwr = 1;
	if (n > 0 && power > 0)
	{
		while (power-- > 0)
			pwr *= n;
	}
	else if (!nb || !power)
		return (1);
	else if (power < 0)
		return (0);
	return (pwr * sign);
}


