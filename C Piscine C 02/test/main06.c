#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int        ft_str_is_printable(char *str);

int     main(void)
{
    int res;
    
        printf("\nex06 : char r[] = \"welCome \";\n\nLa salida debe ser 1.\nSalida : ");
        char    r10[] = "welcome";
        res = ft_str_is_printable(r10);
        printf("%d\n", res);
        printf("\n       char r[] = \"\\n\";\n\nLa salida debe ser 0.\nSalida : ");
        char    r11[] = "\n";
        res = ft_str_is_printable(r11);
        printf("%d\n", res);
}
