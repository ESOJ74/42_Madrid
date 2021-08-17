/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   **ft_split                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_in_string(char c, char *set)
{
	while (1)
	{
		if (*set == '\0')
			return (c == '\0');
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int		ft_count(char *str, char *charset)
{
	int		count;
	char	*prev;
	char	*next;

	count = 0;
	prev = str;
	next = str;
	while (1)
	{
		if (char_in_string(*str, charset))
			next = str;
		if (next - prev > 1)
			count++;
		if (*str == '\0')
			break ;
		prev = next;
		str++;
	}
	return (count);
}

int		add_part(char **entry, char *prev, int size, char *charset)
{
	if (char_in_string(prev[0], charset))
	{
		prev++;
		size--;
	}
	*entry = (char *)malloc((size + 3));
	ft_strncpy(*entry, prev, size);
	(*entry)[size] = '\0';
	(*entry)[size + 1] = '\0';
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		size;
	char	*prev;
	char	*next;
	char	**arr;

	arr = (char **)malloc((ft_count(str, charset) + 1) * sizeof(char *));
	i = 0;
	prev = str;
	next = str;
	while (1)
	{
		if (char_in_string(*str, charset))
			next = str;
		size = next - prev;
		if (size > 1)
			i += add_part(&arr[i], prev, size, charset);
		if (*str == '\0')
			break ;
		prev = next;
		str++;
	}
	arr[i] = 0;
	return (arr);
}
