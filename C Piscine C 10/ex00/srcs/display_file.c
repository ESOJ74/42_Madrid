/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#include "display_file.h"

int	display_file(char *path)
{
	int				file_descriptor;
	unsigned int	byte_read;
	char			buffer[BUFFER_SIZE];

	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor < 0)
		return (0);
	byte_read = read(file_descriptor, buffer, BUFFER_SIZE);
	while (byte_read > 0)
	{
		write(1, &buffer[0], byte_read);
		byte_read = read(file_descriptor, buffer, BUFFER_SIZE);
		if (byte_read == (unsigned int)-1)
			return (0);
	}	
	close(file_descriptor);
	return (1);
}
