#include <unistd.h>
#include "ft_putchar.c"


void	ft_print_line(int width, char begin_symbol, char middle_symbol, char end_symbol)
{
	int		i;
	
	i = 1;
	while(i <= width)
	{
		if(i == 1 )
			ft_putchar(begin_symbol);
		if(i <= (width -1))
			ft_putchar(middle_symbol);
		if(i == width)
			ft_putchar(end_symbol);
		i++;
	}
}

void	rush(int x, int y)
{
	int		i;

	i = 1;
	while(i <= y)
	{
		if (i == 1)
			ft_print_line(x, '/', '*', '\\');
		if(i <= (y - 1))
			ft_print_line(x, '*', ' ', '*');
		if(i == y)
			ft_print_line(x, '\\', '*', '/');
		ft_putchar('\n');
		i++;
	}
}

