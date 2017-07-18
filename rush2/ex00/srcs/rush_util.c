/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 22:32:31 by tjose             #+#    #+#             */
/*   Updated: 2016/11/14 21:02:46 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

void	fill_array(int x, char str[], char c[], int *i) // fill the array with our recreated rush
{
	if (x > 0)
	{
		str[(*i)++] = c[0];
		x--;
	}
	while (x > 1)
	{
		str[(*i)++] = c[1];
		x--;
	}
	if (x == 1)
	{
		str[(*i)++] = c[2];
	}
	str[(*i)++] = '\n';
}

void	init_c(char left, char mid, char right, char c[]) // initialize the "c[]" array with the proper characters
{
	c[0] = left;
	c[1] = mid;
	c[2] = right;
}

void	print_rush(int width, int height, int multi_flag, int num)
{ //print "num" rush
	if (multi_flag) // place these bars if a rush has already been printed
		ft_putstr(" || ");
	if (num == 0)
		ft_putstr("[rush-00] [");
	if (num == 1)
		ft_putstr("[rush-01] [");
	if (num == 2)
		ft_putstr("[rush-02] [");
	if (num == 3)
		ft_putstr("[rush-03] [");
	if (num == 4)
		ft_putstr("[rush-04] [");
	ft_putnbr(width);
	ft_putstr("] [");
	ft_putnbr(height);
	ft_putstr("]");
}
