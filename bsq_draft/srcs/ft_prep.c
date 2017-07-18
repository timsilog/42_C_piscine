/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prep.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:53:27 by yli               #+#    #+#             */
/*   Updated: 2016/11/15 18:59:35 by yli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	get_chars(char *puzzle, int ch[5], int width)
{
	int holder;
	int i;
	int j;

	j = 2;
	i = 0;
	holder = 0;
	while (i < width - 4)
	{
		holder = holder * 10 + (puzzle[i] - '0');
		i++;
	}
	ch[1] = holder;
	while (j < 5)
	{
		ch[j] = puzzle[i];
		i++;
		j++;
	}
}

int		proc_line1(int ch[5], char *puzzle)
{
	int	width1;

	width1 = 0;
	while (puzzle[width1] != '\0')
		width1++;
	get_chars(puzzle, ch, width1);
	return (width1);
}

int		get_width(char *puzzle)
{
	int i;

	i = 0;
	while (puzzle[i] != '\n')
		i++;
	return (i + 1);
}

int		prepare_puzzle(char *puzzle, char *line1)
{
	int i;
	int ch[5];
	int first_line;

	i = 0;
	first_line = proc_line1(ch, line1);
	if (is_valid(puzzle, ch))
	{
		ch[0] = get_width(puzzle);
		solve_it(puzzle, ch);
		return (1);
	}
	return (0);
}

int		is_valid(char *puzzle, int ch[5])
{
	int i;
	int width;
	int j;
	int height;

	i = -1;
	height = 0;
	width = get_width(puzzle);
	while (puzzle[++i])
	{
		j = 0;
		while (puzzle[i] != '\n')
		{
			if (!is_ch(puzzle[i++], ch))
				return (0);
			j++;
		}
		if (++j != width)
			return (0);
		height++;
	}
	if (height != ch[1])
		return (0);
	return (1);
}
