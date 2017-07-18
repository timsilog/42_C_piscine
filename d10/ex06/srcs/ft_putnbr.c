/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 14:17:01 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 19:41:04 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	recursiveputnbr(int nb)
{
	int remainder;

	if (nb == 0)
		return ;
	ft_putnbr(nb / 10);
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
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	recursiveputnbr(nb);
}
