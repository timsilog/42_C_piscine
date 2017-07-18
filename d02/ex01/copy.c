
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 13:44:37 by tjose             #+#    #+#             */
/*   Updated: 2016/10/26 14:20:22 by tjose            ###   ########.fr       */
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
	z = 'z';
	while (z >= 'a')
		{
	        ft_putchar(z--);
	    }
    ft_putchar('\n');
}

int main()
{
    ft_print_alphabet();
    return 0;
}
