#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int 	main(void)
{
	printf("\nex00 : char r[] = {\"Ejemplo\"}; char t[8]; char *p; p = ft_strcpy(t, r);\n\nLa salida debe ser Ejemplo.\nSalida : ");	
	char	r[] = {"Ejemplo"};					
	char	t[8];							
	char	*p;								
	p = ft_strcpy(t, r);					
	printf("%s\n", p);
}
