#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_ultimate_ft(int *********nbr);

int        main(void)
{
    system("clear");
    int        *********i;
    int        ********q;
    int        *******w;
    int        ******e;
    int        *****r;
    int        ****t;
    int        ***y;
    int        **u;
    int     *Point;
    int     num;
    i = &q;
    q = &w;
    w = &e;
    e = &r;
    r = &t;
    t = &y;
    y = &u;
    u = &Point;
    Point = &num;

    num = 21;
    ft_ultimate_ft(i);
    
    if (num == 42)
        printf("ex01 : ft_ultimate_ft(*********nbr)\n\nSalida: %d : ok\n",num);
    else
        printf("ex01 : ft_ultimate_ft(*********nbr)\n\nSalida: %d : KO\n",num);
}
