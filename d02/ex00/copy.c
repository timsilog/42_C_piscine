/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 13:44:37 by tjose             #+#    #+#             */
/*   Updated: 2016/10/26 15:50:01 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_print_alphabet()
{
	char z;
	z = 'a';
	while (z <= 'z')
	{
		ft_putchar(z);
		z++;
	}
	ft_putchar('\n');
}

int main()
{
	ft_print_alphabet();
	return 0;
}
