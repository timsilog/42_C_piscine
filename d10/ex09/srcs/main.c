/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:53:57 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 02:16:34 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_opp.h"

int		div_mod_check(char op, int n2)
{
	if (op == '/')
	{
		if (n2 == 0)
		{
			write(1, "Stop: division by zero", 22);
			return (0);
		}
	}
	else if (op == '%')
	{
		if (n2 == 0)
		{
			write(1, "Stop: modulo by zero", 20);
			return (0);
		}
	}
	return (1);
}

int		get_ans(int n1, int n2, char op)
{
	int i;

	i = 0;
	while (i < 6)
	{
		if (op == *g_opptab[i].op)
		{
			if (div_mod_check(op, n2))
				return (g_opptab[i].fun(n1, n2));
		}
		i++;
	}
	return (0);
}

int		zero_check(int n2, char op)
{
	if (n2 == 0 && op == '/')
	{
		write(1, "Stop: division by zero", 22);
		return (1);
	}
	if (n2 == 0 && op == '%')
	{
		write(1, "Stop: modulo by zero", 20);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;
	char	*op;
	int		ans;

	n1 = 0;
	n2 = 0;
	ans = 0;
	if (argc != 4)
		return (0);
	get_args(argv, &n1, &n2, &op);
	if (zero_check(n2, *op))
		return (0);
	if (op == g_opptab[5].op)
	{
		g_opptab[5].fun(n1, n2);
		return (0);
	}
	else
		ans = get_ans(n1, n2, *op);
	if (ans == 0)
		ft_putchar('0');
	else
		ft_putnbr(ans);
	return (0);
}
