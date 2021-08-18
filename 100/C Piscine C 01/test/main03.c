#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int        main(void)
{
    int        in;
    int        tx;
    int     D;
    int        M;

    in = 20;
    tx = 3;
    D = 0;
    M = 0;
    ft_div_mod(in, tx, &D, &M);
    if (D == in/tx && M == in % tx)
        printf("ex03 : a = 20; b = 3; D = 0; M = 0 ft_div_mod(a, b, &D, &M)\n\nSalida: D = %d, M = %d : ok\n", D, M);
    else
        printf("ex03 : a = 20; b = 3; D = 0; M = 0 ft_div_mod(a, b, &D, &M)\n\nSalida: D = %d, M = %d : KO\n", D, M);
}
