/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 00:40:08 by tjose             #+#    #+#             */
/*   Updated: 2016/10/27 11:21:36 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	ft_putnbr(int nb);
void	init_arr(char arr[10]);

int		ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}

void	init_arr(char arr[10])
{
	int counter;
	char ch_digit;

	counter = 0;
	ch_digit = '0';
	while (counter < 10)
	{
		arr[counter++] = ch_digit;
		ch_digit++;
	}
}

void	ft_putnbr(int nb)
{
	char digits[10];
	int reversed;
	int temp_nb;

	reversed = 0;
	init_arr(digits);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	temp_nb = nb;

	while (temp_nb)
	{
		reversed *= 10;
		reversed += temp_nb % 10;
		temp_nb = temp_nb / 10;
	}
	while (reversed)
	{
		ft_putchar(digits[reversed % 10]);
		reversed = reversed / 10;
	}
	ft_putchar('\n');
}

int main()
{
	ft_putnbr(-42);
	ft_putnbr(24141231);
	ft_putnbr(-212391123);
	return (0);
}

