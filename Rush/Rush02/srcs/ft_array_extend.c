/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_extend                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_str_n_copy(char *dest, char *src, int n)
{
	int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

char	*ft_array(char *o, char *n, unsigned int l, unsigned int len)
{
	char	*dest;

	dest = malloc((len + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	if (o != NULL)
		ft_str_n_copy(dest, o, l);
	ft_str_n_copy(dest + l, n, (unsigned int)(len - l));
	return (dest);
}
