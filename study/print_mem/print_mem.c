/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_mem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:52:26 by tjose             #+#    #+#             */
/*   Updated: 2016/11/17 15:08:29 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_hex(int num, int count)
{
	char *base_16 = "0123456789abcdef";

	while (count)
	{
		write(1, base_16 + (num % 16), 1);
		num /= 16;
		count--;
	}
}

void	print_hexes(const unsigned char *p, size_t size, size_t i)
{
	size_t j = 0;

	while (j < 16 && j+i < size)
	{
		put_hex(p[i + j], 2);
		if (j % 2)
			write(1," ",1);
		j++;
	}
	while (j < 16)
	{
		write(1, "  ", 2);
		if (j % 2)
			write(1, " ", 1);
		j++;
	}
}

void	put_char(const unsigned char c)
{
	if (c > 31 && c < 127)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	print_char(const unsigned char *p, size_t size, size_t i)
{
	size_t j = 0;

	while (j < 16 && j+i < size)
	{
		put_char(p[i + j]);
		j++;
	}
	while (j < 16)
	{
		write(1," ",1);
		j++;
	}
}

void	print_memory(const void *addr, size_t size)
{
	const unsigned char *p = (const unsigned char*)addr;
	size_t i = 0;
	while (i < size)
	{
		print_hexes(p, size, i);
		print_char(p, size, i);
		write(1,"\n",1);
		i += 16;
	}

}


int	main(void)
{
/*	int	tab[10] = {0, 23, 150, 255,
		12, 16,  21, 42};*/
	char tab[50] = "on the next episode of dragonball z";

	print_memory(tab, sizeof(tab));
	return (0);
}
