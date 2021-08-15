#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main (void)
{
	printf("ex04\nnbr = 259; base = \"01\"; La salida debe ser : 100000011\nSalida :\n");
        int     nbr;
        char    *base;
        nbr = 259;	
        base = "01";
        ft_putnbr_base(nbr, base);
        printf("\nnbr = 43; base = \"ab\"; La salida debe ser : bababb\nSalida :\n");
        nbr = 43;	
        base = "ab";
        ft_putnbr_base(nbr, base);
        printf("\nnbr = 166; base = \"abc\"; La salida debe ser : caabb\nSalida :\n");
        nbr = 166;	
        base = "abc";
        ft_putnbr_base(nbr, base);
        printf("\n");       
}
