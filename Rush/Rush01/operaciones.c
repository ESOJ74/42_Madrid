/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by                   #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
