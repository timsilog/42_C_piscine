/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 14:53:38 by tjose             #+#    #+#             */
/*   Updated: 2016/11/01 18:34:17 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_hex_char(char c, int count)
{
	int remainder;

	if (c == 0)
	{
		if (count == 1)
			ft_putchar('0');
		return ;
	}
	remainder = c % 16;
	if (remainder + 48 > '9')
		remainder += 39;
	print_hex_char(c / 16, count + 1);
	ft_putchar(remainder + 48);
}

int		print_middle(char *str, int location, int flag)
{
	int i;

	i = 0;
	while (i++ < 16)
	{
		if (str[location] == '\0' || flag == 1)
		{
			ft_putchar(' ');
			ft_putchar(' ');
			flag = 1;
		}
		else
		{
			print_hex_char(str[location++], 0);
		}
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	return (flag);
}

void	print_str_line(char *str, int location, int flag, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (str[location] < 32 || str[location] == 127 || flag == 1)
		{
			ft_putchar('.');
			location++;
		}
		else
			ft_putchar(str[location++]);
		i++;
		if (i == 16)
			break ;
	}
	ft_putchar('\n');
}

void	print_location(int location, int zeroes)
{
	int		remainder;
	char	c;

	if (location == 0)
	{
		while (zeroes--)
			ft_putchar('0');
		return ;
	}
	remainder = location % 16;
	if (remainder > 9)
		remainder += 39;
	print_location(location / 16, zeroes - 1);
	c = remainder + 48;
	ft_putchar(c);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*str;
	int		location;
	int		flag;

	flag = 0;
	str = addr;
	location = 0;
	while (location < size)
	{
		print_location(location, 8);
		ft_putchar(':');
		ft_putchar(' ');
		flag = print_middle(str, location, flag);
		print_str_line(str, location, flag, size - location);
		location += 16;
	}
	return (addr);
}
