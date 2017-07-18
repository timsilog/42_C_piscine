/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:26:46 by tjose             #+#    #+#             */
/*   Updated: 2016/11/05 21:10:46 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		row_col_is_safe(int guess, char puzzle[][9], int row, int col)
{
	int i;

	i = -1;
	while (++i < 9)
	{
		if (puzzle[row][i] == guess ||
				puzzle[i][col] == guess)
			return (0);
	}
	return (1);
}

int		box_is_safe(int guess, char puzzle[][9], int row, int col)
{
	int row1;
	int row2;
	int col1;
	int col2;

	row1 = (row + 2) % 3;
	row2 = (row + 4) % 3;
	col1 = (col + 2) % 3;
	col2 = (col + 4) % 3;
	if (puzzle[row1 + (row / 3 * 3)][col1 + (col / 3 * 3)] == guess ||
		puzzle[row2 + (row / 3 * 3)][col1 + (col / 3 * 3)] == guess ||
		puzzle[row1 + (row / 3 * 3)][col2 + (col / 3 * 3)] == guess ||
		puzzle[row2 + (row / 3 * 3)][col2 + (col / 3 * 3)] == guess)
		return (0);
	return (1);
}

int		is_safe(int guess, char puzzle[][9], int row, int col)
{
	if (row_col_is_safe(guess, puzzle, row, col) &&
			box_is_safe(guess, puzzle, row, col))
		return (1);
	return (0);
}
