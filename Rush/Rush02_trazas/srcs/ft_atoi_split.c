/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:                                          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_str_n_duplicate(char *src, int n);

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\r'
			|| c == '\f');
}

unsigned long	ft_atoi(char *str)
{
    
    unsigned long	result;
    
	while (ft_is_whitespace(*str))
		str++;
	result = 0;
	while (ft_is_number(*str))
	{
		result *= 10;
		result += (*str) - '0';
		str++;
	}
	if (*str == '\0')
		return (result);
	return (-1);
}

int		ft_split_whitespace_count_word(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (ft_is_whitespace(*str))
			str++;
		if (*str == '\0')
			break ;
		while (!ft_is_whitespace(*str) && *str != '\0')
			str++;
		count++;
	}
	return (count);
}

char	**ft_split_whitespace(char *str)
{
	int		index;
	int		word_count;
	char	*word_start;
	char	**array;

	word_count = ft_split_whitespace_count_word(str);
	if (!(array = malloc((word_count + 1) * sizeof(char *))))
		return (NULL);
	index = 0;
	while (*str)
	{
		while (ft_is_whitespace(*str))
			str++;
		if (*str == '\0')
			break ;
		word_start = str;
		while (!ft_is_whitespace(*str) && *str != '\0')
			str++;
		array[index] = ft_str_n_duplicate(word_start, str - word_start);
		index++;
	}
	array[index] = 0;
	return (array);
}
