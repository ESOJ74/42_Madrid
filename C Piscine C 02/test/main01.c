#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);


int     main(void)
{
    char    *p;
    printf("\nex01 : char r[] = {\"Ejemplo.Ejemplo.Ejemplo.Ejemplo\"}; char t[20]; char *p; p = ft_strcnpy(t, r, 25);\nLa salida debe ser Ejemplo.Ejemplo.Ejemplo.E\nSalida : ");
    char    r1[] = {"Ejemplo.Ejemplo.Ejemplo.Ejemplo"};
    char    t1[20];
    p = ft_strncpy(t1, r1,25);
    printf("%s\n", p);
}
