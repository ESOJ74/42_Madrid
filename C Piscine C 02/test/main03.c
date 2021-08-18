#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int    ft_str_is_numeric(char *str);

int     main(void)
{
    int res;
    
	printf("\nex03 : char r[] = \"welcome\";\n\nLa salida debe ser 0.\nSalida : ");
    char    r4[] = "welcome";
    res = ft_str_is_numeric(r4);
    printf("%d\n", res);
    printf("\n       char r[] = \"12587\";\n\nLa salida debe ser 1.\nSalida : ");
    char    r5[] = "12587";
    res = ft_str_is_numeric(r5);
    printf("%d\n", res);
}
