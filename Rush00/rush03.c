void	ft_line(int x, char extremo, char medio, char fin);
void	ft_char(int x);
void	ft_putchar(char c);
void	ft_column (char c, int y);

void	rush(int x, int y)
{
	int	i;

	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else if (x > 1 && y == 1)
	{
		ft_line(x, 'A', 'B', 'C');
	}
	else if (x == 1 && y > 1)
	{
		ft_column('A', y);
	}
	else
	{
		i = 2;
		ft_line(x, 'A', 'B', 'C');
		while (i++ < y)
		{
			ft_line(x, 'B', ' ', 'B');
		}
		ft_line(x, 'A', 'B', 'C');
	}
}

void	ft_column (char c, int y)
{
	ft_putchar(c);
	ft_putchar('\n');
	ft_char(y);
	ft_putchar(c);
	ft_putchar('\n');
}

void	ft_line(int x, char extremo, char medio, char fin)
{
	int	i;

	i = 2;
	ft_putchar(extremo);
	while (i < x)
	{
		ft_putchar(medio);
		i++;
	}
	ft_putchar(fin);
	ft_putchar('\n');
}

void	ft_char(int x)
{
	int	i;

	i = 2;
	while (i < x)
	{
		ft_putchar('B');
		ft_putchar('\n');
		i++;
	}
}
