#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    ft_str_is_lowercase(char *str);

int     main(void)
{
    int res;
    
    printf("\nex04 : char r[] = \"welCome\";\n\nLa salida debe ser 0.\nsSalida : ");
    char    r6[] = "welCome";
    res = ft_str_is_lowercase(r6);
    printf("%d\n", res);
    printf("\n       char r[] = \"welcome\";\n\nLa salida debe ser 1.\nSalida : ");
    char    r7[] = "welcome";
    res = ft_str_is_lowercase(r7);
    printf("%d\n", res);
}
