/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prep.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:53:27 by yli               #+#    #+#             */
/*   Updated: 2016/11/15 21:32:45 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		get_chars(char *puzzle, int ch[5], int width)
{
	int holder;
	int i;
	int j;

	j = 2;
	i = -1;
	holder = 0;
	while (++i < width - 4)
	{
		if (!is_num(puzzle[i]))
			return (0);
		holder = holder * 10 + (puzzle[i] - '0');
	}
	if (holder == 0)
		return (0);
	ch[1] = holder;
	while (j < 5)
	{
		if (!ch[j])
			return (0);
		ch[j] = puzzle[i];
		i++;
		j++;
	}
	return (1);
}

int		proc_line1(int ch[5], char *puzzle)
{
	int	width1;

	width1 = 0;
	while (puzzle[width1] != '\0')
		width1++;
	return (get_chars(puzzle, ch, width1));
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

	i = 0;
	if (!proc_line1(ch, line1))
		return (0);
	ch[0] = get_width(puzzle);
	if (ch[0] == 1 || ch[1] == 0)
		return (0);
	if (is_valid(puzzle, ch))
	{
		solve_it(puzzle, ch);
		return (1);
	}
	return (0);
}

int		is_valid(char *puzzle, int ch[5])
{
	int i;
	int j;
	int height;

	i = -1;
	height = 0;
	while (puzzle[++i])
	{
		j = 0;
		while (puzzle[i] != '\n')
		{
			if (!is_ch(puzzle[i++], ch))
				return (0);
			j++;
		}
		if (++j != ch[0])
			return (0);
		height++;
	}
	if (height != ch[1])
		return (0);
	return (1);
}
