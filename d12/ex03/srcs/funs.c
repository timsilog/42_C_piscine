/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:35:18 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 21:16:37 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dump.h"

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
			print_err(argv[i]);
			break ;
		}
		total++;
	}
	close(fd_temp);
	return (total);
}

void	put_hex(int n)
{
	if (!n)
		return ;
	put_hex(n / 16);
	if (n % 16 > 9)
		ft_putchar(n % 16 + 'a' - 10, 1);
	else
		ft_putchar(n % 16 + '0', 1);
}

void	fill_arr(int argc, char **argv, char *all)
{
	int		i;
	int		j;
	char	buffer[2];
	int		fd;
	int		ret;

	i = 0;
	j = 1;
	while (++j < argc)
	{
		fd = open(argv[j], O_RDONLY);
		if (fd != -1)
		{
			while ((ret = read(fd, buffer, 1)))
			{
				if (ret < 0)
					break ;
				all[i++] = *buffer;
			}
			close(fd);
		}
	}
	all[i] = '\0';
}
