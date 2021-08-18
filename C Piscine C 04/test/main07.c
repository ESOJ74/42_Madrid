#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strupcase(char *str);

int     main(void)
{
    printf("\nex07 : char    r[] = \"welcome\";\n\nLa salida debe ser WELCOME.\nSalida : ");
    char    r12[] = "welcome";
    ft_strupcase(r12);
    printf("%s\n",r12);
}
