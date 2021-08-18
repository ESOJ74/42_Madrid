#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_ultimate_div_mod(int *a, int *b);

int        main(void)
{
    int a;
    int b;
    int tx;
    int in;
    int        il;
    int        tl;
    il = 20;
    tl = 3;
    ft_ultimate_div_mod(&il, &tl);
    printf("ex04 : a = 20; b = 3  ft_div_mod(&a, &b)\n\nSalida: a = %d, b = %d : \n", il, tl);
    
}
