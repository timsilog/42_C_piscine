/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:32:17 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 18:32:33 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 10

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	print_stuff(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret == -1)
			return ;
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 20);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "open() error\n", 14);
		return (1);
	}
	print_stuff(fd);
	if (close(fd) == -1)
	{
		write(2, "close() error\n", 15);
		return (1);
	}
	return (0);
}
