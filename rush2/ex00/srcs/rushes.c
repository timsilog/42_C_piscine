/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:53:26 by tjose             #+#    #+#             */
/*   Updated: 2016/11/14 20:51:38 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

void	rush00(int x, int y, char str[])
{
	char	c[3];
	int		i;

	i = 0;
	if (y < 0 || x < 0)
		return ;
	if (y > 0)
	{
		init_c('o', '-', 'o', c);
		fill_array(x, str, c, &i);
		y--;
	}
	while (y > 1)
	{
		init_c('|', ' ', '|', c);
		fill_array(x, str, c, &i);
		y--;
	}
	if (y == 1)
	{
		init_c('o', '-', 'o', c);
		fill_array(x, str, c, &i);
	}
}

void	rush01(int x, int y, char str[])
{
	char	c[3];
	int		i;

	i = 0;
	if (y < 0 || x < 0)
		return ;
	if (y > 0)
	{
		init_c('/', '*', '\\', c);
		fill_array(x, str, c, &i);
		y--;
	}
	while (y > 1)
	{
		init_c('*', ' ', '*', c);
		fill_array(x, str, c, &i);
		y--;
	}
	if (y == 1)
	{
		init_c('\\', '*', '/', c);
		fill_array(x, str, c, &i);
	}
}

void	rush02(int x, int y, char str[])
{
	char	c[3];
	int		i;

	i = 0;
	if (y < 0 || x < 0)
		return ;
	if (y > 0)
	{
		init_c('A', 'B', 'A', c);
		fill_array(x, str, c, &i);
		y--;
	}
	while (y > 1)
	{
		init_c('B', ' ', 'B', c);
		fill_array(x, str, c, &i);
		y--;
	}
	if (y == 1)
	{
		init_c('C', 'B', 'C', c);
		fill_array(x, str, c, &i);
	}
}

void	rush03(int x, int y, char str[])
{
	char	c[3];
	int		i;

	i = 0;
	if (y < 0 || x < 0)
		return ;
	if (y > 0)
	{
		init_c('A', 'B', 'C', c);
		fill_array(x, str, c, &i);
		y--;
	}
	while (y > 1)
	{
		init_c('B', ' ', 'B', c);
		fill_array(x, str, c, &i);
		y--;
	}
	if (y == 1)
	{
		init_c('A', 'B', 'C', c);
		fill_array(x, str, c, &i);
	}
}

void	rush04(int x, int y, char str[])
{
	char	c[3];
	int		i;

	i = 0;
	if (y < 0 || x < 0)
		return ;
	if (y > 0)
	{
		init_c('A', 'B', 'C', c);
		fill_array(x, str, c, &i);
		y--;
	}
	while (y > 1)
	{
		init_c('B', ' ', 'B', c);
		fill_array(x, str, c, &i);
		y--;
	}
	if (y == 1)
	{
		init_c('C', 'B', 'A', c);
		fill_array(x, str, c, &i);
	}
}
