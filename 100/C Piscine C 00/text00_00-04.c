/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corrector Rush01                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:  jcuenca                                 #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
void ft_putchar(char c);

void	ft_print_alphabet(void);

void	ft_print_reverse_alphabet(void);

void	ft_print_numbers(void);

void	ft_is_negative(int n);

int		main(void)
{
        // ft_putchar
    system("clear");
    printf("ex00 : ft_putchar('Z') : La salida debe ser Z.  Salida :  \n");
	ft_putchar('Z');
	printf("\n");	
	
	//ft_print_alphabet
	printf("\nex01 : ft_print_alphabet() : La salida debe ser el abecedario.  Salida :  \n");
	ft_print_alphabet();
	printf("\n");	
	
	//ft_print_alphabet
	printf("\nex02 : ft_print_reverse_alphabet() : La salida debe ser el abecedario al revés.  Salida :  \n");
	ft_print_reverse_alphabet();
	printf("\n");
	
	//ft_print_numbers
	printf("\nex03 : ft_print_numbers() : La salida debe ser 0123456789. Salida : \n");
	ft_print_numbers();
	printf("\n");
	
	//ft_is_negative
	printf("\nex04 : ft_is_negative(4) : La salida debe ser P. Salida : \n");
	ft_is_negative(4);
	printf("\n");
	printf("\nex04 : ft_is_negative(-4) : La salida debe ser N. Salida : \n");
	ft_is_negative(-4);
	printf("\n");	
	
	return (0);
}
