void	ft_line(int x, char extremo, char medio);
void	ft_char(int x);
void	ft_putchar(char c);
void	ft_column (char c, int y);

void	rush(int x, int y)
{
	int	i;

	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if (x > 1 && y == 1)
	{
		ft_line(x, 'o', '-');
	}
	else if (x == 1 && y > 1)
	{
		ft_column('o', y);
	}
	else
	{
		i = 2;
		ft_line(x, 'o', '-');
		while (i++ < y)
		{
			ft_line(x, '|', ' ');
		}
		ft_line(x, 'o', '-');
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

void	ft_line(int x, char extremo, char medio)
{
	int	i;

	i = 2;
	ft_putchar(extremo);
	while (i < x)
	{
		ft_putchar(medio);
		i++;
	}
	ft_putchar(extremo);
	ft_putchar('\n');
}

void	ft_char(int x)
{
	int	i;

	i = 2;
	while (i < x)
	{
		ft_putchar('|');
		ft_putchar('\n');
		i++;
	}
}
