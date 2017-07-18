/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:16:48 by tjose             #+#    #+#             */
/*   Updated: 2016/11/05 21:48:48 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		solve_it_loop(char puzzle[][9], int row, int col)
{
	char	guess;
	int		count;

	count = 0;
	guess = '0';
	while (++guess <= '9')
	{
		if (is_safe(guess, puzzle, row, col))
		{
			puzzle[row][col] = guess;
			if (col == 8)
				count += (solve_it(puzzle, row + 1, 0));
			else
				count += (solve_it(puzzle, row, col + 1));
			puzzle[row][col] = '.';
		}
	}
	return (count);
}

int		solve_it(char puzzle[][9], int row, int col)
{
	int count;

	count = 0;
	if (row == 9)
		return (1);
	if (puzzle[row][col] != '.')
	{
		if (col == 8)
			count += (solve_it(puzzle, row + 1, 0));
		else
			count += (solve_it(puzzle, row, col + 1));
	}
	else
		count += solve_it_loop(puzzle, row, col);
	return (count);
}

void	fill_puzzle(char puzzle[][9], char **argv, int *error_flag)
{
	int row;
	int col;

	row = -1;
	while (++row < 9)
	{
		col = -1;
		while (++col < 9)
		{
			if (argv[row + 1][col] >= '0' && argv[row + 1][col] <= '9')
				puzzle[row][col] = argv[row + 1][col];
			else if (argv[row + 1][col] == '.')
				puzzle[row][col] = '.';
			else
				*error_flag = 1;
		}
	}
}

int		main(int argc, char **argv)
{
	char	puzzle[9][9];
	int		num_solutions;
	int		error_flag;

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	error_flag = 0;
	fill_puzzle(puzzle, argv, &error_flag);
	if (error_flag == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	num_solutions = solve_it(puzzle, 0, 0);
	if (num_solutions == 1)
		print_puzzle(puzzle);
	else
		ft_putstr("Error\n");
	return (0);
}
