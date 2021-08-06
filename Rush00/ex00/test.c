

void	ft_putchar(char c)
{
	write(1, &c, 1);

	return (0);
}




void	ft_print_line(int width, char begin_and_end_symbol, char middle_symbol)
{
	int		i;
	i = 1;
	while(i <= width)							
	{
		if(i == 1 || i == width)
			ft_putchar(begin_and_end_symbol);

		else
			ft_putchar(middle_symbol);
		i++;
	}
}





void	rush(int x, int y)			
{
	int		i;

	i = 1;
	while(i <= y)
	{
		if (i == 1 || i == y)
			ft_print_line(x, 'o', '-');
		else
			ft_print_line(x, '|', ' ');

		ft_putchar('\n');
		i++;
	}
}


int		main(void)
{
	rush(5, 4);
	
	return (0);
}

