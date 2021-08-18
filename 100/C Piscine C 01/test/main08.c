#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_sort_int_tab(int *tab, int size);

int        main(void)
{
    int tab2[] = {5,4,3,2,1,60,43,12};

    ft_sort_int_tab(tab2, 8);
    printf("ex08 : tab[] = {5,4,3,2,1,60,43,12}; ft_sort_int_tab(tab2, 8)\n\nLa salida debe ser [1, 2, 3, 4, 5, 12, 43, 60]\nSalida : ");
    
    cont = 0;
    printf("[");
    while (cont < 7)
    {
        printf("%d, ",tab2[cont]);
        cont++;
    }
    printf("%d]\n",tab2[7]);
    
    puntos = puntos + esCorrecto();
}
