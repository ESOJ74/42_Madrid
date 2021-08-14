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
