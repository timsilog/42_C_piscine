/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 23:23:36 by tjose             #+#    #+#             */
/*   Updated: 2016/10/27 21:15:28 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char	print_nums(char one, char two, char three, char four)
{
	ft_putchar(one);
	ft_putchar(two);
	ft_putchar(' ');
	ft_putchar(three);
	ft_putchar(four);
	return (++four);
}

void	print_comma(char one, char two, char three, char four)
{
	if (!(one == '9' && two == '8' && three == '9' && four == ':'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	loop_it(char one, char two, char three, char four)
{
	while (++one <= '9')
	{
		while (++two <= '9')
		{
			while (++three <= '9')
			{
				while (four <= '9')
				{
					four = print_nums(one, two, three, four);
					print_comma(one, two, three, four);
				}
				four = '0';
			}
			three = one - 1;
			four = two + 2;
		}
		two = '0';
	}
}

void	ft_print_comb2(void)
{
	char val1;
	char val2;
	char val3;
	char val4;

	val1 = '0' - 1;
	val2 = '0' - 1;
	val3 = '0' - 1;
	val4 = '1';
	loop_it(val1, val2, val3, val4);
	ft_putchar('\n');
}
