/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:40:50 by rsoto-in          #+#    #+#             */
/*   Updated: 2021/08/11 13:08:29 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;
	int	pwr;
	int	sign;

	n = nb;
	sign = 1;
	if (nb < 0)
	{
		if (power % 2 != 0)
			sign = -1;
		n = nb * -1;
	}
	pwr = n;
	if (n > 0 && power > 0)
		pwr *= ft_recursive_power(n, power - 1);
	else if (!nb || !power)
		return (1);
	else if (power < 0)
		return (0);
	return (pwr * sign);
}

