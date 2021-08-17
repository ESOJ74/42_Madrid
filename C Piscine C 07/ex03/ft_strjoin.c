/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_strjoin                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_final_length(char **strs, int size, int length)
{
	int	f_length;
	int	i;

	f_length = 0;
	i = 0;
	while (i < size)
	{
		f_length += ft_str_length(strs[i]);
		f_length += length;
		i++;
	}
	f_length -= length;
	return (f_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*head;
	char	*string;

	if (size == 0)
		return ((char *)malloc(1));
	length = ft_final_length(strs, size, ft_str_length(sep));
	string = (char *)malloc((length + 1));
	if (!(string))
		return (0);
	head = string;
	i = 0;
	while (i < size)
	{
		ft_strcpy(head, strs[i]);
		head += ft_str_length(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(head, sep);
			head += ft_str_length(sep);
		}
		i++;
	}
	*head = '\0';
	return (string);
}
