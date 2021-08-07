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

void ft_char(int x)
{
	int i = 2;
	
	while(i < x)
	{
		ft_putchar('|');
		ft_putchar('\n');	
		i++;				
	}
}

void rush(int x, int y)
{
	int i = 2;
	
	if (x==1 && y==1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
        else if (x>1 && y==1)
        {
        	ft_line(x, 'o', '-');
        	ft_putchar('\n');
        }
        else if (x==1 && y>1)
        {
        	ft_putchar('o');
        	ft_putchar('\n');
        	
        	ft_char(y);
		
        	ft_putchar('o');
		ft_putchar('\n');
        }
        else
        {
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
}

