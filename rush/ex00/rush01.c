/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 11:31:23 by tjose             #+#    #+#             */
/*   Updated: 2016/10/30 11:50:23 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printlines(int x, char left, char middle, char right)
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

void	rush00(int x, int y)
{
	if (y < 0 || x < 0)
		return ;
	if (y > 0)
	{
		printlines(x, '/', '*', '\\');
		ft_putchar('\n');
		y--;
	}
	while (y > 1)
	{
		printlines(x, '*', ' ', '*');
		ft_putchar('\n');
		y--;
	}
	if (y == 1)
	{
		printlines(x, '\\', '*', '/');
		ft_putchar('\n');
	}
}
