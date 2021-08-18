#include <unistd.h>
#include <stdio.h>

int    ft_str_is_alpha(char *str);

int     main(void)
{
    printf("\nex02 : char r[] = \"welcome_to_hogwarts\";\n\nLa salida debe ser 0.\nSalida : ");
    char    r2[] = "welcome_to_hogwarts";
    int res = ft_str_is_alpha(r2);
    printf("%d\n", res);
    printf("\n       char r[] = \"welcome\";\n\nLa salida debe ser 1.\nSalida : ");
    char    r3[] = "welcome";
    res = ft_str_is_alpha(r3);
    printf("%d\n", res);
}
