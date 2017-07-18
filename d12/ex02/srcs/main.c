/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:31:50 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 22:37:01 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

void	get_content(int fd, int total_size, int offset)
{
	char	*all;
	char	buffer[2];
	int		i;
	int		ret;

	i = 0;
	all = (char*)malloc(sizeof(char) * total_size + 1);
	while ((ret = read(fd, buffer, 1)))
	{
		if (ret < 0)
			return ;
		all[i] = *buffer;
		i++;
	}
	all[i] = '\0';
	close(fd);
	print_char(all, offset);
	free(all);
}

int		check_offset(char *str, int *o_flag)
{
	int		i;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	if (str[0] == '+')
		*o_flag = 1;
	return (1);
}

void	open_files(int argc, char **argv, int offset, int o_flag)
{
	int		fd;
	int		i;
	int		total_size;

	i = 3;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			print_err(argv[i]);
		else
		{
			if (argc > 4)
				print_arrows(argv[i]);
			total_size = get_size(argv, i);
			if (total_size == -1)
				return ;
			if (o_flag)
				get_content(fd, total_size, offset - 1);
			else
				get_content(fd, total_size, total_size - offset);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		o_flag;
	int		offset;

	if (argc < 4)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	o_flag = 0;
	if (check_offset((argv[2]), &o_flag))
		offset = ft_atoi(argv[2]);
	else
	{
		ft_putstr("tail: illegal offset -- \n", 2);
		ft_putstr(argv[2], 2);
		return (1);
	}
	open_files(argc, argv, offset, o_flag);
	return (0);
}
