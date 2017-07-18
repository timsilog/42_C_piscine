/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 21:29:19 by tjose             #+#    #+#             */
/*   Updated: 2016/10/27 13:23:15 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
		write(1, &c, 1);
			return 0;
}

/*char	print_nums(char one, char two, char three, char four)
{
	ft_putchar(one);
	ft_putchar(two);
	ft_putchar(' ');
	ft_putchar(three);
	ft_putchar(four);
	return ++four;
}

void	print_comma(char one, char two, char three, char four)
{
	if (!(one == '9' && two == '8' && three == '9' && four == ':'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
	
void	ft_print_comb2(void)
{
	char val_one;
	char val_two;
	char val_three;
	char val_four;

	val_one = '0' - 1;
	val_two = '0' - 1;
	val_three = '0' - 1;
	val_four = '1';
	while (++val_one <= '9')
	{
		while (++val_two <= '9')
		{
			while (++val_three <= '9')
			{
				while (val_four <= '9')
				{
					val_four = print_nums(val_one, val_two, val_three, val_four);
					print_comma(val_one, val_two, val_three, val_four);
				}
				val_four = '0';
			}
			val_three = val_one - 1;
			val_four = val_two + 2;
		}
		val_two = '0';
	}
	ft_putchar('\n');
}*/

int main()
{
	ft_print_comb2();
	return 0;
}

