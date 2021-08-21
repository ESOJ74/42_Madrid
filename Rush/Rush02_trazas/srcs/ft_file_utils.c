/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:                                          #+#    #+#             */
/*   Updated:                                         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include<stdio.h>

int		ft_open_file(char *path)
{
    printf("Se entra en la funcion ft_open_file del fichero ft_files_utils.c\n");
    return (open(path, O_RDONLY));
}

int		ft_close_file(int fd)
{
    printf("Se entra en la funcion ft_close_file del fichero ft_files_utils.c\n");
    return (close(fd));
}
