/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_range                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*arr;

	if (min >= max)
		return (0);
	range = max - min - 1;
	arr = malloc(range * 4);
	if (arr == NULL)
		return (0);
	i = 0;
	while (i <= range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
