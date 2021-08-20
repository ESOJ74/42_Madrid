/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <stdbool.h>

# include "ft_args_parser.h"

# define DEFAULT_LINE_COUNT 10
# define DEFAULT_BUFFER_SIZE 1024

void	stdin_tail(t_options *opts);

bool	tail(char *exec, char *path, t_options *opts, int total_count);

bool	do_tail(int fd, t_options *opts);

void	write_header(char *path);

#endif
