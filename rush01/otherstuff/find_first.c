/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:16:48 by tjose             #+#    #+#             */
/*   Updated: 2016/11/05 20:32:58 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdio.h>

//PRINT THE PUZZLE
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

// COPY THE PUZZLE
void	copy_puzzle(char copy[][9], char src[][9])
{
	int row;
	int col;
	
	row = -1;
	while (++row < 9)
	{
		col = -1;
		while (++col < 9)
		{
			copy[row][col] = src[row][col];
		}
	}
}

//SOLVE THE PUZZLE
int		solve_it(char puzzle[][9], int row, int col, char copy[][9])
{
	int count;
	char guess;

	count = 0;
	guess = '0';
	if (row == 9)
	{		//puzzle solved! go back
		copy_puzzle(copy, puzzle);
		return (1);
	}
	if (puzzle[row][col] != '.')
	{	// if current cell has number, skip to next cell
		if (col == 8)
		{
			if (solve_it(puzzle, row + 1, 0, copy))
				return (1);
		}
		else 
		{
			if (solve_it(puzzle, row, col + 1, copy))
				return (1);
		}
	}
	else
	{
		while (++guess <= '9')
		{	// if current cell is empty
			if (is_safe(guess, puzzle, row, col))
			{
				puzzle[row][col] = guess;
				printf(" %c ", guess);
				if (col == 8)
				{
					if (solve_it(puzzle, row + 1, 0, copy))
						return (1);
				}
				else 
				{
					if (solve_it(puzzle, row, col + 1, copy))
						return (1);
				}
				puzzle[row][col] = '.';

			}
		
		}
	}
	return (0);
}
	
void	fill_puzzle(char puzzle[][9],char **argv, int *error_flag)
{
	int row;
	int col;

	// fill the array with the given arguments
	row = -1;
	while (++row < 9)
	{
		col = -1;
		while (++col < 9)
		{
			if (argv[row + 1][col] >= '0' && argv[row + 1][col] <= '9')
			{
				puzzle[row][col] = argv[row + 1][col];
			}
			else if (argv[row + 1][col] == '.')
			{
				puzzle[row][col] = '.';
			}
			else 
			{
				ft_putstr("Error\n");
				*error_flag = 1;
			}
		}
	}
}


int		main(int argc, char **argv)
{
	char puzzle[9][9];
	char copy[9][9];
	int num_solutions;
	int error_flag;

	// if not 9 arguments return
	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	
	// malloc and fill the array
	error_flag = 0;
	fill_puzzle(puzzle, argv, &error_flag);
	if (error_flag == 1)
	{
		ft_putstr("Error\n");
		//letm_free(puzzle);
		return (0);
	}
	fill_puzzle(copy, argv, &error_flag);

	// SOLVE THE PUZZLE

	num_solutions = solve_it(puzzle, 0, 0, copy);
	//num_solutions = 1;
	// PRINT THE PUZZLE
	//if (num_solutions == 1)
		print_puzzle(puzzle);
	//else
	//	ft_putstr("Error\n");

	// free the arrays
	//letm_free(puzzle);
	//letm_free(copy);
	return (0);
}
