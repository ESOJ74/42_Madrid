/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_parser.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARGS_PARSER_H
# define FT_ARGS_PARSER_H

# include <stdbool.h>

typedef struct	s_options
{
	char	*executable;
	char	**paths;
	char	*curr_path;
	int		disp_cont;
}				t_options;

bool			parse_args(char **args, int count);

bool			process_files(char **args, int count, int i, t_options *opts);

void			display_usage(t_options *opt);

void			display_error(t_options *opt, char *err, char *cse, bool limit);

#endif
