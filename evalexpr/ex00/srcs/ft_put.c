/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:14:11 by tjose             #+#    #+#             */
/*   Updated: 2016/11/13 22:19:45 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recursiveputnbr(int nb)
{
	int remainder;

	if (nb == 0)
		return ;
	recursiveputnbr(nb / 10);
	remainder = nb % 10;
	ft_putchar(remainder + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748364);
		ft_putchar('8');
		return ;
	}
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	recursiveputnbr(nb);
}
