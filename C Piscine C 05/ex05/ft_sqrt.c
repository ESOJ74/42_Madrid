/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int		sqrt;
	unsigned int		i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	i = 0;
	while ((sqrt = i * i) <= (unsigned int)nb)
		i++;
	i -= 1;
	if (i * i == (unsigned int)nb)
		return (i);
	else
		return (0);
}
