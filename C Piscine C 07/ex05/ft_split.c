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

int    ft_is_space(char to_find, char *str)
{
    while (*str)
    {
        if (to_find == *str++)
            return (1);
    }
    return (0);
}

int    ft_wordcount(char *str, char *charset)
{
    int    count;

    count = 0;
    while (*str)
    {
        while (*str && (ft_is_space(*str, charset)))
            str++;
        if (*str && !(ft_is_space(*str, charset)))
        {
            count++;
            while (*str && !(ft_is_space(*str, charset)))
                str++;
        }
    }
    return (count);
}

int    ft_wordlen(char *str, char *charset)
{
    int        len;

    len = 0;
    while (ft_is_space(*str, charset))
        str++;
    while (*str && !(ft_is_space(*str, charset)))
    {
        str++;
        len++;
    }
    return (len);
}

char    **ft_split(char *str, char *charset)
{
    int        i;
    int        j;
    char    **arr;
    int        words;

    words = ft_wordcount(str, charset);
    i = 0;
    arr = (char **)malloc(sizeof(char *) * (words + 1));
    if (!str || arr == ((void *)0))
        return ((void *)0);
    while (i < words)
    {
        arr[i] = (char *)malloc(sizeof(char) * (ft_wordlen(str, charset) + 1));
        if (arr == ((void *)0))
            return ((void *)0);
        j = 0;
        while (ft_is_space(*str, charset))
            str++;
        while (*str && !(ft_is_space(*str, charset)))
            arr[i][j++] = *str++;
        arr[i][j] = '\0';
        i++;
    }
    arr[i] = ((void *)0);
    return (arr);
}
