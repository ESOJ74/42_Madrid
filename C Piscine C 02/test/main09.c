
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strcapitalize(char *str);

int     main(void)
{
    printf("\nex09 : char    r[] = \"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\";\n\nLa salida debe ser Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\nSalida : ");
    char    r14[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(r14);
    printf("%s\n",r14);
}
