/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:53:57 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 15:16:06 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	make_fun_arr(int (**arr)(int, int))
{
	arr[0] = &plus;
	arr[1] = &minus;
	arr[2] = &times;
	arr[3] = &divide;
	arr[4] = &mod;
}

int		get_ans(int (**arr)(int, int), int n1, int n2, char op)
{
	if (op == '+')
		return (arr[0](n1, n2));
	else if (op == '-')
		return (arr[1](n1, n2));
	else if (op == '*')
		return (arr[2](n1, n2));
	else if (op == '/')
	{
		if (n2 == 0)
		{
			write(1, "Stop: division by zero", 22);
			return (0);
		}
		return (arr[3](n1, n2));
	}
	else if (op == '%')
	{
		if (n2 == 0)
		{
			write(1, "Stop: modulo by zero", 20);
			return (0);
		}
		return (arr[4](n1, n2));
	}
	return (0);
}

int		zero_check(int n2, char op)
{
	if (n2 == 0 && op == '%')
	{
		write(1, "Stop: division by zero", 22);
		return (1);
	}
	if (n2 == 0 && op == '/')
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
	char	op;
	int		(*arr[5])(int, int);
	int		ans;

	n1 = 0;
	n2 = 0;
	if (argc != 4)
		return (0);
	if (!get_args(argv, &n1, &n2, &op))
	{
		ft_putchar('0');
		return (0);
	}
	make_fun_arr(arr);
	if (zero_check(n2, op))
		return (0);
	ans = get_ans(arr, n1, n2, op);
	if (ans == 0)
		ft_putchar('0');
	else
		ft_putnbr(ans);
	return (0);
}
