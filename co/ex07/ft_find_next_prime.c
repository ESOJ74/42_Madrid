/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:43:31 by rsoto-in          #+#    #+#             */
/*   Updated: 2021/08/11 12:55:40 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (n < nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	if (nb < 0 || nb == 0 || nb == 1)
		return (2);
	n = nb;
	while (n <= 2147483647)
	{
		if (ft_is_prime(n))
			return (n);
		n++;
	}
	return (0);
}
