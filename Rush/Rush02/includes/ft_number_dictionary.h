/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_dictionary.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMBER_DICTIONARY_H
# define FT_NUMBER_DICTIONARY_H
# define INVALID -1
# define ENGLISH_DICT "numbers.dict"

typedef struct	s_dict_entry
{
	unsigned long	value;
	char			*str;
	int				normal;
}					t_dict_entry;

typedef struct	s_dict
{
	char			*path;
	int			valid;
	int				size;
	t_dict_entry	*entries;
}				t_dict;

typedef enum {
	no_error,
	error_in_argv,
	invalid_number,
	fail_convert,
	error_in_dict
}	t_error;

typedef enum
{
	parsing_ok,
	empty_line,
	failed,
	reached_eof
}	t_parse_error;

#endif
