#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int     main(void)
{
    printf("\nex010 :  char r[] = {\"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\"}\n");
    printf("         char sal[9];  ft_strlcpy(sal, r15, 9);\n\nLa salida debe ser : salut, c\nSalida : ");
    char    r15[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
    char    sal[9];
    ft_strlcpy(sal, r15, 9);
    printf("%s\n",sal);
}
