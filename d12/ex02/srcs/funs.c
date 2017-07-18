/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:35:18 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 20:06:43 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

void	ft_putchar(char c, int o)
{
	write(o, &c, 1);
}

void	ft_putstr(char *str, int o)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++], o);
}

int		get_size(char **argv, int i)
{
	int		fd_temp;
	int		total;
	char	buffer[2];
	int		ret;

	total = 0;
	fd_temp = open(argv[i], O_RDONLY);
	while ((ret = read(fd_temp, buffer, 1)))
	{
		if (ret < 0)
		{
			return (-1);
		}
		total++;
	}
	close(fd_temp);
	return (total);
}

void	print_char(char *str, int i)
{
	while (str[i])
	{
		ft_putchar(str[i++], 1);
	}
}

void	print_arrows(char *str)
{
	ft_putstr("==> ", 1);
	ft_putstr(str, 1);
	ft_putstr(" <==\n", 1);
}
