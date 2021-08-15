#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str);

int main (void)
{
	printf("\n\nex03\nchar n[] = {\"---+--+1234ab567\"};\nSalida : ");	
        char n[] = {"---+--+1234ab567"};   
        printf("%d\n", ft_atoi(n)); 
        printf("\n");       
}
