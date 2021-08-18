#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strlowcase(char *str);

int     main(void)
{
    printf("\nex08 : char    r[] = \"WELCOME\";\n\nLa salida debe ser welcome.\nSalida : ");
    char    r13[] = "WELCOME";
    ft_strlowcase(r13);
    printf("%s\n",r13);    
}
