/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 00:06:26 by tjose             #+#    #+#             */
/*   Updated: 2016/10/27 21:14:12 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char hun;
	char ten;
	char one;

	hun = '0' - 1;
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
