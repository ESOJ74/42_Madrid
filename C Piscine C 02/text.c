/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corrector Rush02                                   :+:      :+:    :+:   */
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



char	*ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int     ft_str_is_uppercase(char *str);
int	ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putstr_non_printable(char *str);
void	*ft_print_memory(void *addr, unsigned int size);

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
		
int 	main(void)
{
	system("clear");
        int puntos = 0;
        //*ft_strcpy
	printf("\nex00 : char r[] = {\"Ejemplo\"}; char t[8]; char *p; p = ft_strcpy(t, r);\n\nLa salida debe ser Ejemplo.\nSalida : ");	
	char	r[] = {"Ejemplo"};					
	char	t[8];							
	char	*p;								
	p = ft_strcpy(t, r);					
	printf("%s\n", p);
	puntos = puntos + esCorrecto();
	
	
	//*ft_strncpy
	system("clear");
	printf("\nex01 : char r[] = {\"Ejemplo.Ejemplo.Ejemplo.Ejemplo\"}; char t1[20]; char *p; p = ft_strcpy(t1, r1);\nLa salida debe ser Ejemplo.Ejemplo.Ejemplo.Ejemplo\nSalida : ");	
	char	r1[] = {"Ejemplo.Ejemplo.Ejemplo.Ejemplo"};	
	char	t1[20];	
	p = ft_strcpy(t1, r1);					
	printf("%s\n", p);
	puntos = puntos + esCorrecto();
	
	//ft_str_is_alpha	
	system("clear");
	printf("\nex02 : char r[] = \"welcome_to_hogwarts\";\n\nLa salida debe ser 0.\nSalida : ");
	char	r2[] = "welcome_to_hogwarts";	
	int res = ft_str_is_alpha(r2);
	printf("%d\n", res);
	printf("\n       char r[] = \"welcome\";\n\nLa salida debe ser 1.\nSalida : ");
	char	r3[] = "welcome";	
	res = ft_str_is_alpha(r3);
	printf("%d\n", res);
	puntos = puntos + esCorrecto();
	
	//ft_str_is_numeric
	system("clear");	
	printf("\nex03 : char r[] = \"welcome\";\n\nLa salida debe ser 0.\nSalida : ");
	char	r4[] = "welcome";	
	res = ft_str_is_numeric(r4);
	printf("%d\n", res);
	printf("\n       char r[] = \"12587\";\n\nLa salida debe ser 1.\nSalida : ");
	char	r5[] = "12587";	
	res = ft_str_is_numeric(r5);
	printf("%d\n", res);
	puntos = puntos + esCorrecto();
	
	//ft_str_is_lowercase
	system("clear");
	printf("\nex04 : char r[] = \"welCome\";\n\nLa salida debe ser 0.\nsSalida : ");
	char	r6[] = "welCome";	
	res = ft_str_is_lowercase(r6);
	printf("%d\n", res);
	printf("\n       char r[] = \"welcome\";\n\nLa salida debe ser 1.\nSalida : ");
	char	r7[] = "welcome";	
	res = ft_str_is_lowercase(r7);
	printf("%d\n", res);
	puntos = puntos + esCorrecto();
	
	//ft_str_is_uppercase
	system("clear");
	printf("\nex05 : char r[] = \"welCome\";\n\nLa salida debe ser 0.\nSalida : ");
	char	r8[] = "welCome";	
	res = ft_str_is_uppercase(r8);
	printf("%d\n", res);
	printf("\n       char r[] = \"WELCOME\";\n\nLa salida debe ser 1.\nSalida : ");
	char	r9[] = "WELCOME";	
	res = ft_str_is_uppercase(r9);
	printf("%d\n", res);
	puntos = puntos + esCorrecto();
	
	//ft_str_is_printable
	system("clear");
	printf("\nex06 : char r[] = \"welCome \";\n\nLa salida debe ser 1.\nSalida : ");
	char	r10[] = "welcome";	
	res = ft_str_is_printable(r10);
	printf("%d\n", res);
	printf("\n       char r[] = \"\\n\";\n\nLa salida debe ser 0.\nSalida : ");
	char	r11[] = "\n";	
	res = ft_str_is_printable(r11);
	printf("%d\n", res);
	puntos = puntos + esCorrecto();
	
	//*ft_strupcase
	system("clear");
	printf("\nex07 : char	r[] = \"welcome\";\n\nLa salida debe ser WELCOME.\nSalida : ");
	char	r12[] = "welcome";	
	ft_strupcase(r12);
	printf("%s\n",r12);
	puntos = puntos + esCorrecto();
	
	//*ft_strlowcase
	system("clear");
	printf("\nex08 : char	r[] = \"WELCOME\";\n\nLa salida debe ser welcome.\nSalida : ");
	char	r13[] = "WELCOME";	
	ft_strlowcase(r13);
	printf("%s\n",r13);
	puntos = puntos + esCorrecto();
	
	//*ft_strcapitalize
	system("clear");
	printf("\nex09 : char	r[] = \"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\";\n\nLa salida debe ser Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\nSalida : ");
	char	r14[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";	
	ft_strcapitalize(r14);
	printf("%s\n",r14);
	puntos = puntos + esCorrecto();
	
	//ft_strlcpy
	system("clear");
	printf("\nex010 :  char r[] = {\"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\"}\n");
	printf("         char sal[9];  ft_strlcpy(sal, r15, 9);\n\nLa salida debe ser : salut, c\nSalida : ");
	char	r15[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	char	sal[9];
	ft_strlcpy(sal, r15, 9);
	printf("%s\n",sal);
	puntos = puntos + esCorrecto();
	
	//ft_putstr_non_printable
	system("clear");
	printf("\nex011 :  ft_putstr_non_printable(\"Coucou\\ntu\\b\\r vas bien ?\");\n\n");
	printf("La salida debe ser : Coucou\\0atu\\08\\0d vas bien ?\nSalida :\n ");
	ft_putstr_non_printable("Coucou\ntu\b\r vas bien ?");
	puntos = puntos + esCorrecto();
	
	
	
	
	printf("\n\n\nCorrectos %d de 12 ejercicios\n\n\n",puntos);							
	return (0);								
}




