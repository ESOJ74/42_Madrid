/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:39:01 by rsoto-in          #+#    #+#             */
/*   Updated: 2021/08/10 22:38:35 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb > 0)
	{
		nb++;
		while (--nb > 0)
			f *= nb;
	}
	else if (!nb)
		return (1);
	else if (nb < 0)
		return (0);
	return (f);
}
