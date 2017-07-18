/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:24:19 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 20:11:00 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		get_op(char *str, char *op)
{
	if (str[1])
		return (0);
	if (str[0] == '+' || str[0] == '-' || str[0] == '%' ||
			str[0] == '/' || str[0] == '*')
	{
		*op = str[0];
	}
	else
		return (0);
	return (1);
}

int		get_n(char *str, int *n)
{
	int i;
	int neg_flag;

	i = -1;
	neg_flag = 0;
	if (str[0] == '-')
	{
		neg_flag = 1;
		i++;
	}
	while (str[++i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			*n = *n * 10 + str[i] - '0';
		else
			break ;
	}
	if (neg_flag)
		*n *= -1;
	return (1);
}

int		get_args(char **argv, int *n1, int *n2, char *op)
{
	if (!get_n(argv[1], n1) ||
			!get_op(argv[2], op) ||
			!get_n(argv[3], n2))
		return (0);
	return (1);
}
