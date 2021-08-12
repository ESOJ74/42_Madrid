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
	
void ft_ft(int *nbr);

void ft_ultimate_ft(int *********nbr);

void ft_swap(int *a, int *b);

void ft_div_mod(int a, int b, int *div, int *mod);

void ft_ultimate_div_mod(int *a, int *b);

void ft_putstr(char *str);

int ft_strlen(char *str);

void ft_rev_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size);


int esCorrecto (void)
{
       char respuesta[1] = " ";
	while (strcmp(respuesta, "s") != 0 && strcmp(respuesta, "n") != 0)
		{
			printf("\n¿Es correcto el ejercicio? (s/n)");
			scanf( "%s", respuesta);			
		}
		if (strcmp(respuesta, "s") == 0)
			return 1; 
		return 0;
}

int		main(void)
{
       
        system("clear");
        int puntos = 0;       
        
        // ft_ft        
	int		nbr;	
	nbr = 21;	
	ft_ft(&nbr);	
	
	if (nbr == 42) 
		printf("ex00 : nbr = 21 ft_ft(*nbr)\n\nSalida: nbr = %d : ok\n",nbr);
	else
		printf("ex00 : nbr = 21 ft_ft(*nbr)\n\nSalida: nbr = %d : KO\n",nbr);
	
	puntos = puntos + esCorrecto();
	
	// ft_ultimate_ft
	system("clear");
	int		*********i;  
	int		********q;		
	int		*******w;
	int		******e;
	int		*****r;
	int		****t;
	int		***y;
	int		**u;
	int 	*Point;         
	int 	num;            
	i = &q;                 
	q = &w;
	w = &e;
	e = &r;
	r = &t;
	t = &y;
	y = &u;
	u = &Point;
	Point = &num;

	num = 21; 
	ft_ultimate_ft(i);  
	
	if (num == 42) 
		printf("ex01 : ft_ultimate_ft(*********nbr)\n\nSalida: %d : ok\n",num);
	else
		printf("ex01 : ft_ultimate_ft(*********nbr)\n\nSalida: %d : KO\n",num);	
	
	puntos = puntos + esCorrecto();
	
	//ft_swap
	system("clear");
	int		uno;                     
	int		dos;
	uno = 21;                         
	dos = 42;   
	ft_swap(&uno, &dos);
	if (uno == 42 && dos == 21) 
		printf("ex02 : a = 21 ; b = 42 ft_swap(&a, &b)\n\nSalida: a = %d,b = %d : ok\n", uno, dos);
	else
		printf("ex02 : a = 21 ; b = 42 ft_swap(&a, &b)\n\nSalida: a = %d,b = %d : KO\n", uno, dos);
	
	puntos = puntos + esCorrecto();
	
	// ft_div_mod
	system("clear");
	int		in;              
	int		tx;              
	int 	D;              
	int		M;              

	in = 20;                
	tx = 3;                
	D = 0;                 
	M = 0;    
	ft_div_mod(in, tx, &D, &M);
	if (D == in/tx && M == in % tx)
		printf("ex03 : a = 20; b = 3; D = 0; M = 0 ft_div_mod(a, b, &D, &M)\n\nSalida: D = %d, M = %d : ok\n", D, M);
	else
		printf("ex03 : a = 20; b = 3; D = 0; M = 0 ft_div_mod(a, b, &D, &M)\n\nSalida: D = %d, M = %d : KO\n", D, M);
	
	puntos = puntos + esCorrecto();
	
	//ft_ultimate_div_mod
	system("clear");
	int		il;                     
	int		tl;                     
	il = 20;                        
	tl = 3;                         
	ft_ultimate_div_mod(&il, &tl);
	if (D == in/tx && M == in % tx)
		printf("ex04 : a = 20; b = 3  ft_div_mod(&a, &b)\n\nSalida: a = %d, b = %d : ok\n", il, tl);
	else
		printf("ex04 : a = 20; b = 3  ft_div_mod(&a, &b)\n\nSalida: a = %d, b = %d : KO\n", il, tl);
	
	puntos = puntos + esCorrecto();
	
	//ft_putstr	 
	system("clear");	
	printf("ex05 : arr[] = {\"Hello\\n\"}  ft_putstr(arr)\n\nLa salida debe ser Hello.\nSalida : \n");
	char	arr[] = {"Hello\n"}; 
	ft_putstr(arr);
	
	puntos = puntos + esCorrecto();
	
	//ft_strlen
	system("clear");
	int		lenght;					
	
	lenght = ft_strlen(arr);
	if (lenght == 6)
		printf("ex06 : arr[] = {\"Hello\\n\"};   lenght = ft_strlen(arr)\n\nSalida: lenght = %d : ok\n", lenght);
	else
		printf("ex06 : arr[] = {\"Hello\\n\"};   lenght = ft_strlen(arr)\n\nSalida: lenght = %d : KO\n", lenght);
	
	puntos = puntos + esCorrecto();
		
	//ft_rev_int_tab
	system("clear");
	int	tab[] = {1,2,3,4,5};
	ft_rev_int_tab(tab, 5);
	printf("ex07 : tab[] = {1,2,3,4,5}; ft_rev_int_tab(tab, 5)\n\nLa salida debe ser [5, 4, 3, 2, 1]\nSalida : ");
	int cont;

	cont = 0;
	printf("[");
	while (cont < 4)
	{
		printf("%d, ",tab[cont]);
		cont++;
	}
	printf("%d]\n",tab[4]);
	
	puntos = puntos + esCorrecto();
	
	//ft_sort_int_tab
	system("clear");
	int tab2[] = {5,4,3,2,1,60,43,12};     

	ft_sort_int_tab(tab2, 8);
	printf("ex08 : tab[] = {5,4,3,2,1,60,43,12}; ft_sort_int_tab(tab2, 8)\n\nLa salida debe ser [1, 2, 3, 4, 5, 12, 43, 60]\nSalida : ");
	
	cont = 0;
	printf("[");
	while (cont < 7)
	{
		printf("%d, ",tab2[cont]);
		cont++;
	}
	printf("%d]\n",tab2[7]);
    
    puntos = puntos + esCorrecto();
	
	printf("\n Correctos %d de 9 ejercicios\n\n\n",puntos);
	
	return (0);
}






