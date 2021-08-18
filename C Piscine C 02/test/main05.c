#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_str_is_uppercase(char *str);

int     main(void)
{
    int res;
    
    printf("\nex05 : char r[] = \"welCome\";\n\nLa salida debe ser 0.\nSalida : ");
    char    r8[] = "welCome";
    res = ft_str_is_uppercase(r8);
    printf("%d\n", res);
    printf("\n       char r[] = \"WELCOME\";\n\nLa salida debe ser 1.\nSalida : ");
    char    r9[] = "WELCOME";
    res = ft_str_is_uppercase(r9);
    printf("%d\n", res);
}
