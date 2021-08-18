#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_rev_int_tab(int *tab, int size);

int        main(void)
{
    int    tab[] = {1,2,3,4,5};
    ft_rev_int_tab(tab, 5);
    printf("ex07 : tab[] = {1,2,3,4,5}; ft_rev_int_tab(tab, 5)\n\nLa salida debe ser [5, 4, 3, 2, 1]\nSalida : ");
    int cont;

    cont = 0;
    printf("[");
    while (cont < 4)
    {
        printf("%d, ",tab[cont]);
        cont++;
    }
    printf("%d]\n",tab[4]);
}
