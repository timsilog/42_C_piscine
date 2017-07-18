/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 11:41:59 by tjose             #+#    #+#             */
/*   Updated: 2016/10/26 13:39:06 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

int ft_nputchar(char c, int n)
{
	int i;
 	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i = i + 1;
	}
	return 0;
}

int main ()
{
	ft_nputchar('@', 42);
	ft_putchar('\n');
	return 0;
}
