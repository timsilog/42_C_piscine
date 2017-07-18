/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 21:46:19 by tjose             #+#    #+#             */
/*   Updated: 2016/11/02 15:31:35 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_base(int nbr, char *base, int in_base)
{
	int remainder;

	if (nbr == 0)
		return ;
	remainder = nbr % in_base;
	print_base(nbr / in_base, base, in_base);
	ft_putchar(base[remainder]);
}

int		has_etc(char c)
{
	if (c == '\n' || c == '\t' || c == '\v' || c == '\r' || c == '\f'
			|| c == '-' || c == '+')
		return (1);
	return (0);
}

int		is_invalid(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (i != j && base[i] == base[j])
				return (1);
			j++;
		}
		j = 0;
		if (has_etc(base[i]))
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		in_base;
	long	holder;

	holder = nbr;
	in_base = 0;
	while (base[in_base] != '\0')
	{
		in_base++;
	}
	if (in_base < 2)
		return ;
	if (is_invalid(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		holder = -holder;
	}
	print_base(holder, base, in_base);
}
