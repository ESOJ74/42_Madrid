
#include <unistd.h>

int		doyourstuff(int board[4][4], int *input);

void	print_solution(int board[4][4]);

void	lookfor4_1(int board[4][4], int *input, int pos)
{
	int fill;

	fill = 0;
	while ((input[pos]) && pos <= 15)
	{
		if ((input[pos] == 4) && ((pos >= 8 && pos <= 11)))
			while (fill < 4)
			{
				board[pos % 4][fill] = fill + 1;
				fill++;
			}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 12 && pos <= 15)))
			while (fill > 0)
			{
				board[pos % 4][4 - fill] = fill;
				fill--;
			}
		pos++;
	}
}

void	lookfor4_0(int board[4][4], int *input)
{
	int pos;
	int fill;

	pos = 0;
	fill = 0;
	while ((input[pos]) && pos < 8)
	{
		if ((input[pos] == 4) && ((pos >= 0 && pos <= 3)))
			while (fill < 4)
			{
				board[fill][pos] = fill + 1;
				fill++;
			}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 4 && pos <= 7)))
			while (fill > 0)
			{
				board[4 - fill][(pos % 4)] = fill;
				fill--;
			}
		pos++;
	}
	lookfor4_1(board, input, pos);
}

void	lookfor1(int board[4][4], int *input)
{
	int pos;

	pos = 0;
	while (input[pos])
	{
		if ((input[pos] == 1) && ((pos >= 0) && (pos <= 3)))
			board[0][pos] = 4;
		if ((input[pos] == 1) && ((pos >= 4) && (pos <= 7)))
			board[3][pos - 4] = 4;
		if ((input[pos] == 1) && ((pos >= 8) && (pos <= 11)))
			board[pos - 8][0] = 4;
		if ((input[pos] == 1) && ((pos >= 12) && (pos <= 15)))
			board[pos - 12][3] = 4;
		pos++;
	}
	lookfor4_0(board, input);
}

int		solution(int board[4][4], int *input){
	
	lookfor1(board, input);
	if ((doyourstuff(board, input)) == 1)
		print_solution(board);
	else
		write(1, "\nERROR - No Solution\n\n", 22);
	return (0);
}
