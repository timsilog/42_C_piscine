/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:18:28 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 21:05:48 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *all;
	int			i;
	int			j;

	all = (t_stock_par*)malloc(sizeof(t_stock_par) * ac + 1);
	i = 0;
	j = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			j++;
		}
		all[i].size_param = j;
		all[i].str = av[i];
		all[i].copy = (char*)malloc(sizeof(char) * j + 1);
		all[i].copy = av[i];
		all[i].tab = ft_split_whitespaces(all[i].str);
		i++;
		j = 0;
	}
	all[i].str = "0";
	return (all);
}
