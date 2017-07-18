/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_solve_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:38:08 by yli               #+#    #+#             */
/*   Updated: 2016/11/15 18:50:42 by yli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_solution(char *puzzle, int dimension, int start, int ch[5])
{
	int i;
	int j;

	i = -1;
	while (++i < dimension)
	{
		j = -1;
		while (++j < dimension)
		{
			puzzle[start] = ch[4];
			start++;
		}
		start = start + ch[0] - dimension;
	}
	ft_putstr(puzzle, 1);
}

int		is_safe_square(char *puzzle, int start, int ch[5], int dimension)
{
	int i;
	int j;

	i = -1;
	while (++i < dimension)
	{
		if (start / ch[0] > ch[1])
			return (0);
		j = -1;
		while (++j < dimension)
		{
			if (puzzle[start] != ch[2])
				return (0);
			start++;
		}
		start = start + ch[0] - dimension;
	}
	return (1);
}

int		find_biggest_square(char **puzzle, int i, int ch[5], int dimension)
{
	if ((*puzzle)[i + ch[0] * dimension - 1] < ch[0] * ch[1] + ch[1] + 1)
	{
		while (is_safe_square(*puzzle, i, ch, dimension))
			dimension++;
	}
	dimension--;
	return (dimension);
}

void	solve_it(char *puzzle, int ch[5])
{
	int i;
	int largest;
	int check;
	int coordinate;

	i = 0;
	largest = 1;
	while (puzzle[i])
	{
		if (puzzle[i] == ch[2])
		{
			check = find_biggest_square(&puzzle, i, ch, largest);
			if (check > largest)
			{
				largest = check;
				coordinate = i;
			}
			i++;
		}
		else
			i++;
	}
	print_solution(puzzle, largest, coordinate, ch);
}
