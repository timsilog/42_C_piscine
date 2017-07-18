/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 23:27:23 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 21:15:09 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dump.h"

int		check_repeat(char *str, int nb)
{
	int		i;
	char	last_line[17];
	char	this_line[17];

	i = -1;
	while (++i < 16)
	{
		last_line[i] = str[nb - 16];
		this_line[i] = str[nb];
		nb++;
		if (!str[nb])
			break ;
	}
	last_line[i] = '\0';
	this_line[i] = '\0';
	if (!ft_strcmp(last_line, this_line))
		return (1);
	return (0);
}

void	take_a_dump(char *str)
{
	int		i;
	int		length;
	int		star_flag;

	i = 0;
	star_flag = 0;
	length = ft_strlen(str);
	while (i < length)
	{
		if (check_repeat(str, i))
		{
			if (!star_flag)
				ft_putstr("*\n", 1);
			star_flag = 1;
		}
		else
		{
			print_zeroes(i);
			print_hex(str, i);
			print_char(str, i);
			star_flag = 0;
		}
		i += 16;
	}
	print_zeroes(length);
}

void	get_content(int total_size, int argc, char **argv)
{
	char	*all;

	all = (char*)malloc(sizeof(char) * total_size + 1);
	fill_arr(argc, argv, all);
	if (all[0])
		take_a_dump(all);
	free(all);
}

void	open_files(int argc, char **argv)
{
	int		fd;
	int		i;
	int		total_size;
	int		flag;
	int		temp;

	flag = 0;
	i = 1;
	total_size = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			print_err(argv[i]);
		else
		{
			if ((temp = get_size(argv, i) > -1))
				total_size += temp;
			flag = 1;
		}
	}
	if (flag)
		get_content(total_size, argc, argv);
}

int		main(int argc, char **argv)
{
	if (argc < 3)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	open_files(argc, argv);
	return (0);
}
