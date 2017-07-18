/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:19:09 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 21:09:54 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dump.h"

void	print_zeroes(int nb)
{
	int		num_length;
	int		i;
	int		temp;

	num_length = 0;
	temp = nb;
	while ((temp /= 16))
		num_length++;
	i = 0;
	if (!num_length)
		ft_putchar('0', 1);
	while (++i < 8 - num_length)
		ft_putchar('0', 1);
	put_hex(nb);
	ft_putstr("  ", 1);
}

void	print_char(char *str, int nb)
{
	int		i;
	char	line[17];

	i = -1;
	ft_putchar('|', 1);
	while (++i < 16)
	{
		if (str[nb] == '\n' || str[nb] == '\t' || str[nb] == '\v'
				|| str[nb] == '\f' || str[nb] == '\r')
			ft_putchar('.', 1);
		else
			ft_putchar(str[nb], 1);
		nb++;
	}
	line[i] = '\0';
	ft_putstr("|\n", 1);
}

void	print_hex(char *str, int nb)
{
	int		i;

	i = -1;
	while (++i < 16)
	{
		if (!str[nb])
			ft_putstr("  ", 1);
		else if (str[nb] >= 0 && str[nb] < 16)
			ft_putchar('0', 1);
		put_hex(str[nb++]);
		ft_putchar(' ', 1);
		if (i == 7)
			ft_putchar(' ', 1);
	}
	ft_putchar(' ', 1);
}
