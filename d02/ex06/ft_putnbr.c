/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 11:14:51 by tjose             #+#    #+#             */
/*   Updated: 2016/10/28 00:05:33 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	init_arr(char arr[10])
{
	int		counter;
	char	ch_digit;

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
	char	*reversed;
	int		temp_nb;
	char	digits[10];

	init_arr(digits);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	temp_nb = nb;
	while (temp_nb)
	{
		*reversed = digits[temp_nb % 10];
		reversed++;
		temp_nb = temp_nb / 10;
	}
	reversed--;
	while (*reversed)
	{
		ft_putchar(*reversed);
		reversed--;
	}
	ft_putchar('\n');
}
