#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    ft_putstr_non_printable(char *str);

int     main(void)
{
    printf("\nex011 :  ft_putstr_non_printable(\"Coucou\\ntu\\b\\r vas bien ?\");\n\n");
    printf("La salida debe ser : Coucou\\0atu\\08\\0d vas bien ?\nSalida :\n ");
    ft_putstr_non_printable("Coucou\ntu\b\r vas bien ?");    
}
