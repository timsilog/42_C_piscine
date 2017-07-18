/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 21:25:24 by tjose             #+#    #+#             */
/*   Updated: 2016/10/26 21:25:30 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb()
{
	char hun;
	char ten;
	char one;

	hun = '0'-1;
	while (hun++ < '8')
	{
		ten = hun;
		while (++ten < '9')
		{
			one = ten + 1;
			while (one <= '9')
			{
				ft_putchar(hun);
				ft_putchar(ten);
				ft_putchar(one++);
				if (hun != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
	ft_putchar('\n');
}
