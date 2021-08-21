/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_extend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:                                          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

char	*ft_str_n_copy(char *dest, char *src, int n)
{
    printf("Se entra en la funcion ft_str_n_copy del fichero ft_array_extend.c\n");
    int		index;

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
    printf("la funcion ft_str_n_copy devuelve dest = %s\n",dest);
	return (dest);
}

char	*ft_extend_array(char *orig, char *n_cont, unsigned int old_len, unsigned int len)
{
    printf("-------------------------------------\n");
    printf("Se entra en la funcion ft_extend_array del fichero ft_array_extend.c\n");
    char *dest;

	if (!(dest = malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (orig != NULL)
		ft_str_n_copy(dest, orig, old_len);
	ft_str_n_copy(dest + old_len, n_cont, (unsigned int)(len - old_len));
	return (dest);
}
