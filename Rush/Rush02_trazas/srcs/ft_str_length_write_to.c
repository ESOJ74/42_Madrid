/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:                                          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_length(char *str)
{
    printf("se entra en la funcion ft_str_length del fichero ft_str_length_write_to.c\n");
    int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

void	ft_str_write_to(int fd, char *str)
{
    printf("se entra en la funcion ft_str_write_to del fichero ft_str_length_write_to.c\n");
    while (*str)
		write(fd, str++, 1);
}
