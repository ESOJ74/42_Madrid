/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <errno.h>

#include "ft_args_parser.h"
#include "ft_console_io.h"
#include "ft_file_utils.h"
#include "ft_dumper.h"

bool	ft_process_input(t_options *options, int count)
{
	unsigned int	length;
	char			*content;

	length = 0;
	if (count == -1)
		content = ft_read_full(IN, &length);
	else
		content = ft_read_multiple(options, count, &length, count);
	ft_dump(options, content, length, length / 16 + 1);
	return (errno == 0);
}

bool	ft_stdin_hexdump(t_options *options)
{
	return (ft_process_input(options, -1));
}

bool	ft_hexdump(t_options *options, int count)
{
	return (ft_process_input(options, count));
}
