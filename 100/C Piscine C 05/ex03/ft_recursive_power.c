/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power_recursive(int nb, int pow, int res)
{
	if (pow-- > 0)
		return (ft_recursive_power_recursive(nb, pow, res *= nb));
	return (res);
}

int	ft_recursive_power(int nb, int pow)
{
	if (pow < 0)
		return (0);
	return (ft_recursive_power_recursive(nb, pow, 1));
}
