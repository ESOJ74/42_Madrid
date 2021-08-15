/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuenca <jcuenca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:06:00 by jcuenca           #+#    #+#             */
/*   Updated: 2021/08/08 07:28:00 by jcuenca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BOARD_SIZE 10

int	risk(int board[][BOARD_SIZE], int at_x, int at_y)
{
	int	x;
	int	y;
	int	offsets[2];

	offsets[0] = at_y - at_x;
	offsets[1] = at_y + at_x;
	x = 0;
	while (x < BOARD_SIZE)
	{
		y = 0;
		while (y < BOARD_SIZE)
		{
			if (x == at_x || y == at_y
				|| y == x + offsets[0] || y == -x + offsets[1])
				if (board[y][x])
					return (1);
			y++;
		}
		x++;
	}
	return (0);
}

void	clear_column(int board[][BOARD_SIZE], int x)
{
	int	i;

	i = 0;
	while (i < BOARD_SIZE)
	{
		board[i++][x] = 0;
	}
}

void	queen_position(int board[][BOARD_SIZE])
{
	int	y;
	int	col;

	y = 0;
	while (y < BOARD_SIZE)
	{
		col = 0;
		while (col < BOARD_SIZE)
		{
			if (board[y][col])
			{
				write(1, &"0123456789"[col], 1);
				break ;
			}
			col++;
		}
		y++;
	}
	write(1, "\n", 1);
}

int	find(int board[][BOARD_SIZE], int x, int *sol)
{
	int	y;

	if (x >= BOARD_SIZE)
		return (1);
	y = 0;
	while (y < BOARD_SIZE)
	{
		if (!risk(board, x, y))
		{
			board[y][x] = 1;
			if (find(board, x + 1, sol))
			{
				*sol += 1;
				queen_position(board);
			}
			board[y][x] = 0;
		}
		y++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	sol;
	int	board[BOARD_SIZE][BOARD_SIZE];
	int	col;

	sol = 0;
	col = 0;
	while (col++ < BOARD_SIZE)
		clear_column(board, col - 1);
	find(board, 0, &sol);
	return (sol);
}
