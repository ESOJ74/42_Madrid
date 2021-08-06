
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
			ft_print_line(x, 'A', 'B', 'C');
		if(i <= (y - 1))
			ft_print_line(x, 'B', ' ', 'B');
		if(i == y)
			ft_print_line(x, 'C', 'B', 'A');
		ft_putchar('\n');
		i++;
	}
}

