#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_ft(int *nbr);

int        main(void)
{
    int        nbr;
    nbr = 21;
    ft_ft(&nbr);
    
    if (nbr == 42)
        printf("ex00 : nbr = 21 ft_ft(*nbr)\n\nSalida: nbr = %d : ok\n",nbr);
    else
        printf("ex00 : nbr = 21 ft_ft(*nbr)\n\nSalida: nbr = %d : KO\n",nbr);
}
