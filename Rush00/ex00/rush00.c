#include <unistd.h>
#include "ft_putchar.c"

void ft_line(int x, char extremo, char medio)
{
	int i = 2;
	
	ft_putchar(extremo);
    
	while(i < x)
	{
		ft_putchar(medio);
		i++;
	}
    
	ft_putchar(extremo);
}

void rush(int x, int y)
{
	int i = 2;
    
	ft_line(x, 'o', '-');
	ft_putchar('\n');
    
	while(i < y)
	{
		ft_line(x, '|', ' ');
		ft_putchar('\n');	
		i++;				
	}		
	
	ft_line(x, 'o', '-');
	ft_putchar('\n');
}

