void	ft_line(int x, char extremo, char medio, char fin);
void	ft_char(int x);
void	ft_putchar(char c);
void	ft_column (char inicio, char fin, int y);

void	rush(int x, int y)
{
	int	i;

	if (x == 1 && y == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
	else if (x > 1 && y == 1)
	{
		ft_line(x, '/', '*', '\\');
	}
	else if (x == 1 && y > 1)
	{
		ft_column('/', '\\', y);
	}
	else
	{
		i = 2;
		ft_line(x, '/', '*', '\\');
		while (i++ < y)
		{
			ft_line(x, '*', ' ', '*');
		}
		ft_line(x, '\\', '*', '/');
	}
}

void	ft_column (char inicio, char fin, int y)
{
	ft_putchar(inicio);
	ft_putchar('\n');
	ft_char(y);
	ft_putchar(fin);
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
		ft_putchar('*');
		ft_putchar('\n');
		i++;
	}
}
