/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:             jcuenca <jcuenca@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include "ft_number_dictionary.h"

t_dict			ft_load_default_dictionary(void);
t_dict			ft_load_dictionary(char *path);
void			ft_free_dictionary(t_dict *dict);

void			ft_str_write_to(int fd, char *str);
unsigned long	ft_atoi(char *str);
int				ft_itow(t_dict *dict, unsigned long n, int *sp, int pr);

t_error	process(char *to_convert, t_dict *dict)
{
	unsigned long	number;
	int				put_space;

	number = ft_atoi(to_convert);
	if (number == (unsigned long) - 1)
		return (invalid_number);
	if (!ft_itow(dict, number, 0, 0))
		return (fail_convert);
	put_space = 0;
	ft_itow(dict, number, &put_space, 1);
	return (no_error);
}

void	show_error(t_error error)
{
	if (error == error_in_dict)
		ft_str_write_to(2, "Diccionario no válido");
	if (error == invalid_number)
		ft_str_write_to(2, "Numero no válido");
	if (error == fail_convert)
		ft_str_write_to(2, "Error al convertir");
	if (error == error_in_argv)
		ft_str_write_to(2, "Argumentos no válidos");
	ft_str_write_to(2, "\n");
}

t_error	check_argv(int argc, char **argv, char **to_conv, t_dict *dict)
{
	if (argc == 3)
	{
		*dict = ft_load_dictionary(argv[1]);
		*to_conv = argv[2];
	}
	else if (argc == 2)
	{
		*dict = ft_load_default_dictionary();
		*to_conv = argv[1];
	}
	else
		return (error_in_argv);
	return (no_error);
}

int	main(int argc, char **argv)
{
	t_error	error;
	t_dict	dict;
	char	*to_convert;

	error = check_argv(argc, argv, &to_convert, &dict);
	if (error == no_error && !dict.valid)
		error = error_in_dict;
	if (error == no_error)
		error = process(to_convert, &dict);
	if (error != no_error)
	{
		show_error(error);
		return (1);
	}
	ft_str_write_to(1, "\n");
	ft_free_dictionary(&dict);
	return (0);
}
