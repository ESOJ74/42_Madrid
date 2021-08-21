/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:                                          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

int		ft_str_length(char *str);

char	*ft_str_copy(char *dest, char *src)
{
    printf("se entra en la funcion ft_str_copy del fichero ft_str_join.c\n");
    int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int		ft_str_join_get_final_length(char **strings, int size, int sep_length)
{
     printf("se entra en la funcion ft_str_join_get_final_length del fichero ft_str_join.c\n");
    int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_str_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_str_join(int size, char **strs, char *sep)
{
    printf("se entra en la funcion ft_str_join del fichero ft_str_join.c\n");
    int		full_length;
	int		index;
	char	*read_head;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_str_join_get_final_length(strs, size, ft_str_length(sep));
	if (!(string = (char *)malloc((full_length + 1) * sizeof(char))))
		return (0);
	read_head = string;
	index = 0;
	while (index < size)
	{
		ft_str_copy(read_head, strs[index]);
		read_head += ft_str_length(strs[index]);
		if (index < size - 1)
		{
			ft_str_copy(read_head, sep);
			read_head += ft_str_length(sep);
		}
		index++;
	}
	*read_head = '\0';
	return (string);
}
