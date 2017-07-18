/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:07:40 by tjose             #+#    #+#             */
/*   Updated: 2016/11/03 15:45:39 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
	}
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
		ft_putchar(s[i++]);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str[0] != '0')
	{
		j = 0;
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		while (par[i].tab[j])
		{
			ft_putstr(par[i].tab[j++]);
			ft_putchar('\n');
		}
		i++;
	}
}
