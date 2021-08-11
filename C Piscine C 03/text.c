
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, int nb);
char	*ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

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
        
	//ft_strcmp	
	printf("\nex00\n\n       char str1[] = {\"1234567890\"}; char str2[] = {\"1234577890\"};\nSalida : \n");
	char str1[] = {"1234567890"};
	char str2[] = {"1234577890"};
  	printf("%d",ft_strcmp(str1, str2));
  	printf("\n       char str1[] = {\"1234567890\"}; char str2[] = {\"1234577890\"};\nSalida : \n");
	char str3[] = {"1234567890"};
	char str4[] = {"1234567890"};
	printf("%d",ft_strcmp(str3, str4));
	printf("\n       char str1[] = {\"123456\"}; char str2[] = {\"1234567\"};\nSalida : \n");
	char str5[] = {"123456"};
	char str6[] = {"1234567"};
	printf("%d",ft_strcmp(str5, str6));
	printf("\n       char str1[] = {\"1234567\"}; char str2[] = {\"123456\"};\nSalida : \n");
	char str7[] = {"1234567"};
	char str8[] = {"123456"};
  	printf("%d",ft_strcmp(str7, str8));
  	printf("\n       char str1[] = {\"welcome\"}; char str2[] = {\"welCome\"};\nSalida : \n");
	char str9[] = {"welcome"};
	char str10[] = {"welCome"};
  	printf("%d",ft_strcmp(str9, str10));
  	printf("\n       char str1[] = {\"welcome\"}; char str2[] = {\"welcome\"};\nSalida : \n");
	char str11[] = {"welcome"};
	char str12[] = {"welcome"};
  	printf("%d",ft_strcmp(str11, str12));
  	puntos = puntos + esCorrecto();
  	
  	//ft_strncmp
  	system("clear");
	printf("ex01\n\n       char str1[] = {\"1234567890\"}; char str2[] = {\"1234577890\"}; n=6; \nSalida : \n");
  	printf("%d",ft_strncmp(str1, str2,6));
  	printf("\n       char str1[] = {\"1234567890\"}; char str2[] = {\"1234577890\"}; n=5;\nSalida : \n");
	printf("%d",ft_strncmp(str3, str4,5));
	printf("\n       char str1[] = {\"123456\"}; char str2[] = {\"1234567\"}; n=5;\nSalida : \n");
	printf("%d",ft_strncmp(str5, str6,5));
	printf("\n       char str1[] = {\"1234567\"}; char str2[] = {\"123456\"}; n=6;\nSalida : \n");
  	printf("%d",ft_strncmp(str7, str8,6));
  	printf("\n       char str1[] = {\"welcome\"}; char str2[] = {\"welCome\"}; n=3; \nSalida : \n");
  	printf("%d",ft_strncmp(str9, str10,3));
  	printf("\n       char str1[] = {\"welcome\"}; char str2[] = {\"welCome\"}; n=4;\nSalida : \n");
  	printf("%d",ft_strncmp(str9, str10,4));
  	puntos = puntos + esCorrecto();
  	
  	//ft_strcat
  	system("clear");
  	printf("ex02 : char t[20] = {\"Hello \"}; ft_strcat(t, \"world\");\nSalida : ");		
	char	t[20] = {"Hello "};	
	ft_strcat(t, "world");
	printf(t);	
	puntos = puntos + esCorrecto();	
	
	// ft_strncat
	system("clear");
  	printf("ex03 : char t[20] = {\"Hello \"}; ft_strncat(t, \"world in the morning\", 8);\nSalida : ");		
	char	t1[20] = {"Hello "};						
	ft_strncat(t1, "world in the morning", 8);							
	printf(t1);	
	puntos = puntos + esCorrecto();
	
	//ft_strstr
	system("clear");
  	printf("ex04 : char r[] = {\"Hello world.Good day\"}; char *p; ft_strstr(r, \"Bad\");\nSalida : ");		
	char	r[] = {"Hello world.Good day"};
	char	*p;
	p = ft_strstr(r, "Bad"); 	
	if (p == NULL)
		printf("Palabra no encontrada");
	else
		printf(p);
	
	printf("      \nchar r[] = {\"Hello world.Good day\"}; char *p; ft_strstr(r, \"Good\");\nSalida : ");	
	p = ft_strstr(r, "Good"); 	
	if (p == NULL)
		printf("Palabra no encontrada");
	else
		printf(p);
	puntos = puntos + esCorrecto();
	
	//ft_strlcat
	system("clear");
	printf("ex05 : char r[] = {\"world.Good Morning\"}; char t[20] = {\"Hello \"}; ft_strlcat(t, r, 10);\nSalida : \n");
	char	r1[] = {"world.Good Morning\n"};	
	char	t11[20] = {"Hello "};	
	ft_strlcat(t11, r1, 10);							
	printf(t11);
	printf("\n\n\n     char r[] = {\"world.Good Morning\"}; char t[20] = {\"Hello \"}; ft_strlcat(t, r, 25);\nSalida : \n");
	char	t12[20] = {"Hello "};
	ft_strlcat(t12, r1, 25);
	printf(t12);
	puntos = puntos + esCorrecto();
	
	printf("\n\n\nCorrectos %d de 6 ejercicios\n\n\n",puntos);										
	return (0);
}
