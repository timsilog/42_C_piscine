/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_funs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 00:39:54 by tjose             #+#    #+#             */
/*   Updated: 2016/11/14 21:03:55 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush0.h"

void	printlines(int x, char left, char middle, char right) // print the rushes
{
	if (x > 0)
	{
		ft_putchar(left);
		x--;
	}
	while (x > 1)
	{
		ft_putchar(middle);
		x--;
	}
	if (x == 1)
		ft_putchar(right);
}

int		ft_atoi(char *str)// quick and dirty atoi because the original rushes should only work with positive numbers, negative numbers would print nothing otherwise.
{
	int num;
	int count;

	count = 0;
	num = 0;
	while (str[count] != '\0')
	{
		num *= 10;
		num += (str[count] - 48);
		count++;
	}
	return (num);
}
