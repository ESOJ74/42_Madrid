#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_swap(int *a, int *b);

int        main(void)
{
    system("clear");
    int        uno;
    int        dos;
    uno = 21;
    dos = 42;
    ft_swap(&uno, &dos);
    if (uno == 42 && dos == 21)
        printf("ex02 : a = 21 ; b = 42 ft_swap(&a, &b)\n\nSalida: a = %d,b = %d : ok\n", uno, dos);
    else
        printf("ex02 : a = 21 ; b = 42 ft_swap(&a, &b)\n\nSalida: a = %d,b = %d : KO\n", uno, dos);
}
