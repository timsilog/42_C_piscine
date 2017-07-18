/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 13:18:30 by tjose             #+#    #+#             */
/*   Updated: 2016/11/02 15:33:24 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_hex(char c)
{
	int remainder;

	if (c == 0)
		return ;
	remainder = c % 16;
	if (remainder + 48 > '9')
		remainder += 39;
	put_hex(c / 16);
	ft_putchar(remainder + 48);
}

int		is_non_printable(char c)
{
	if (c < 32 || c == 127)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_non_printable(str[i]))
		{
			ft_putchar('\\');
			if (str[i] >= 0 && str[i] < 16)
				ft_putchar('0');
			put_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
