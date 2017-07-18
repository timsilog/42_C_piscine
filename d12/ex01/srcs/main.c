/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:32:17 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 20:04:12 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"
#define BUF_SIZE 10

void	print_stuff(int fd, char *name)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret < 0)
		{
			print_err(name);
			return ;
		}
		buf[ret] = '\0';
		ft_putstr(buf, 1);
	}
}

void	catch(void)
{
	int		ret;
	char	buf[2];

	while ((ret = read(0, buf, 1)))
	{
		buf[ret] = '\0';
		ft_putstr(buf, 1);
	}
}

void	open_stuff(int argc, char **argv)
{
	int fd;
	int i;

	i = 0;
	while (++i < argc)
	{
		if (argv[i][0] == '-' && !argv[i][1])
			catch();
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			print_err(argv[i]);
		else
		{
			print_stuff(fd, argv[i]);
			if (close(fd) == -1)
			{
				ft_putstr("close() error\n", 2);
				return ;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		catch();
		return (1);
	}
	open_stuff(argc, argv);
	return (0);
}
