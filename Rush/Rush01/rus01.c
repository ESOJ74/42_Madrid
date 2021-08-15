                                                              Fichero main.c
                                                              
#include <unistd.h>

void	print_solution(int board[4][4]);

int		operations(int board[4][4], int *input);

int	checkinput(char *arg, int *input)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	while (arg[i])
	{
		if (arg[i] < '1' || arg[i] > '4')
			return (0);
		if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
				|| ((arg[i + 1] == 0) && (arg[i - 1] == ' '))))
		{
			input[out++] = (arg[i++] - '0');
		}
		if (arg[i] == ' ')
			i++;
	}
	return (out);
}

int	solution(int board[4][4], int *input)
{
	if ((operations(board, input)) == 1)
		print_solution(board);
	else
		write(1, "\nERROR - No Solution\n\n", 22);
	return (0);
}

int	initboard(int *input)
{
	int	i;
	int	j;
	int	board[4][4];

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			board[i][j++] = 0;
		i++;
	}
	solution(board, input);
	return (0);
}









int	main(int argc, char **argv)
{
	int	input[16];

	if (argc == 2)
	{
		if (checkinput(argv[1], input) == 16)
			initboard(input);
		else
			write(1, "\nERROR\n\n", 8);
	}
	else
		write(1, "\nERROR\n\n", 8);
	return (0);
}                                                            
                                                              Fichero print.c

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_solution(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[row][col] + '0');
			if (col == 3)
				col++;
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
                                                      Fichero board.c
                                                      
int	up(int board[4][4], int col, int num)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	count = 1;
	max = board[i][col];
	while (i < 4)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i++;
	}
	if (count == num)
		return (1);
	return (0);
}

int	down(int board[4][4], int col, int num)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	count = 1;
	max = board[i][col];
	while (i >= 0)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i--;
	}
	if (count == num)
		return (1);
	return (0);
}

int	left(int board[4][4], int row, int num)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	count = 1;
	max = board[row][i];
	while (i < 4)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i++;
	}
	if (count == num)
		return (1);
	return (0);
}

int	right(int board[4][4], int row, int num)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	count = 1;
	max = board[row][i];
	while (i >= 0)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i--;
	}
	if (count == num)
		return (1);
	return (0);
}

int	checkboard(int board[4][4], int *in_num)
{
	int	i;

	i = 0;
	while (in_num[i])
	{
		if (i >= 0 && i <= 3)
			if (!up(board, i, in_num[i]))
				return (0);
		if (i >= 4 && i <= 7)
			if (!down(board, i - 4, in_num[i]))
				return (0);
		if (i >= 8 && i <= 11)
			if (!left(board, i - 8, in_num[i]))
				return (0);
		if (i >= 12 && i <= 15)
			if (!right(board, i - 12, in_num[i]))
				return (0);
		i++;
	}
	return (1);
}

                                                     Fichero comprobaciones.c
                                                     
int	col(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	row(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	safe(int board[4][4], int r, int c, int num)
{
	if (((row(board, r, num)) && (col(board, c, num)) \
			&& (board[r][c] == 0)))
		return (1);
	return (0);
}

                                                                 Fichero operaciones.c
                                                                 
int	checkboard(int board[4][4], int *in_num);
int	safe(int board[4][4], int r, int c, int num);

int	zeros(int board[4][4], int *r, int *c)
{
	*r = 0;
	*c = 0;
	while (*r < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (board[*r][*c] == 0)
				return (1);
			*c += 1;
		}
		*r += 1;
	}
	return (0);
}

int	operations(int board[4][4], int *input)
{
	int	row;
	int	col;
	int	n;

	n = 1;
	if ((zeros(board, &row, &col) == 0) && (checkboard(board, input) == 1))
		return (1);
	while (n <= 4)
	{
		if (safe(board, row, col, n))
		{
			board[row][col] = n;
			if (operations(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}      
