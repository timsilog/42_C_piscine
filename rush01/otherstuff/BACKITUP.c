/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:16:48 by tjose             #+#    #+#             */
/*   Updated: 2016/11/05 20:46:47 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdio.h>

void	print_puzzle(char puzzle[][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(puzzle[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	copy_puzzle(char copy[][9], char src[][9])
{
	int row;
	int col;
	
	row = -1;
	while (++row < 9)
	{
		col = -1;
		while (++col < 9)
			copy[row][col] = src[row][col];
	}
}

int		solve_it(char puzzle[][9], int row, int col, char copy[][9])
{
	int count;
	char guess;

	count = 0;
	guess = '0';
	if (row == 9)
	{
		copy_puzzle(copy, puzzle);
		return (1);
	}
	if (puzzle[row][col] != '.')
	{
		if (col == 8)
			count += (solve_it(puzzle, row + 1, 0, copy));
		else 
			count += (solve_it(puzzle, row, col + 1, copy));
	}
	else
	{
		while (++guess <= '9')
		{
			if (is_safe(guess, puzzle, row, col))
			{
				puzzle[row][col] = guess;
				if (col == 8)
					count += (solve_it(puzzle, row + 1, 0, copy));
				else 
					count += (solve_it(puzzle, row, col + 1, copy));
				puzzle[row][col] = '.';
			}
		}
	}
	return (count);
}
	
void	fill_puzzle(char puzzle[][9],char **argv, int *error_flag)
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
	char puzzle[9][9];
	char copy[9][9];
	int num_solutions;
	int error_flag;

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
	fill_puzzle(copy, argv, &error_flag);
	num_solutions = solve_it(puzzle, 0, 0, copy);
	if (num_solutions == 1)
		print_puzzle(copy);
	else
		ft_putstr("Error\n");
	return (0);
}