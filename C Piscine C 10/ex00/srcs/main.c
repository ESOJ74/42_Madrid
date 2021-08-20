/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

#include "display_file.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		str_write(ERR, MSG_ERR_NO_FILE);
	else if (argc > 2)
		str_write(ERR, MSG_ERR_TOO_MANY_ARGS);
	else
	{
		if (!display_file(argv[1]))
			str_write(ERR, MSG_ERR_CANNOT_READ);
		else
			return (1);
	}
	return (0);
}
