/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoto-in <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:39:36 by rsoto-in          #+#    #+#             */
/*   Updated: 2021/08/10 22:34:00 by rsoto-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	f;

	f = nb;
	if (nb > 0)
		f *= ft_recursive_factorial(nb - 1);
	else if (!nb)
		return (1);
	else if (nb < 0)
		return (0);
	return (f);
}
