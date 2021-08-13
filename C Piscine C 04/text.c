#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int	ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);

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
        
        //ft_strlen        
        char str[] = {"1234567890"};
        char str1[] = "Elefante";
        printf("ex00\nchar str[] = {\"1234567890\"} ;\nSalida : ");
        printf("%d\n", ft_strlen(str));
        printf("char str[] = \"Elefante\" ;\nSalida : ");
        printf("%d\n", ft_strlen(str1));
        puntos = puntos + esCorrecto();
        
        //ft_putstr
        system("clear");
        char str2[] = {"1234567890"};
	char str3[] = "Elefante";
	printf("ex01\nchar str[] = {\"1234567890\"} ; ft_putstr(str);\nSalida : \n");	
	ft_putstr(str2);
        printf("\nchar str[] = \"Elefante\" ; ft_putstr(str);\nSalida : \n");
        ft_putstr(str3);        
        puntos = puntos + esCorrecto();
        
        //ft_putnbr
        system("clear");
        printf("ex02\nft_putnbr(-1);\nSalida : \n");	
        ft_putnbr(-1);
        printf("\nft_putnbr(0);\nSalida : \n");	
        ft_putnbr(0);
        printf("\nft_putnbr(10);\nSalida : \n");	
        ft_putnbr(10);
        puntos = puntos + esCorrecto();
        
        //ft_atoi
        system("clear");
        printf("ex03\nchar n[] = {\"---+--+1234ab567\"};\nSalida : ");	
        char n[] = {"---+--+1234ab567"};   
        printf("%d\n", ft_atoi(n)); 
        puntos = puntos + esCorrecto();
        
        //ft_putnbr_base
        system("clear");
        printf("ex04\nnbr = 259; base = \"01\"; La salida debe ser : 100000011\nSalida :\n");
        int     nbr;
        char    *base;
        nbr = 259;	
        base = "01";
        ft_putnbr_base(nbr, base);
        printf("\nnbr = 43; base = \"ab\"; La salida debe ser : bababb\nSalida :\n");
        nbr = 43;	
        base = "ab";
        ft_putnbr_base(nbr, base);
        printf("\nnbr = 166; base = \"abc\"; La salida debe ser : caabb\nSalida :\n");
        nbr = 166;	
        base = "abc";
        ft_putnbr_base(nbr, base);
        puntos = puntos + esCorrecto();
        
        
}
