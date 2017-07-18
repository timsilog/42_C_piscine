/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 15:05:37 by tjose             #+#    #+#             */
/*   Updated: 2016/10/26 15:19:56 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_print_numbers()
{
	char i;
	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}

int main()
{
	ft_print_numbers();
	return 0;
}
