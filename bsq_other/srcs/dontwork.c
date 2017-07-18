/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:45:31 by yli               #+#    #+#             */
/*   Updated: 2016/11/15 22:33:38 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*get_first_line(int from)
{
	char	buff[2];
	char	*first_line;
	int		i;

	i = 0;
	first_line = malloc(sizeof(char) * 25);
	while (*buff != '\n')
	{
		read(from, buff, 1);
		first_line[i] = *buff;
		i++;
	}
	first_line[i] = '\0';
	return (first_line);
}

void	file_loop(char *file)
{
	char	*ptr;
	char	*line1;
	char	buff[65000];
	int		fd;
	int		ret;
	char	*temp;
	int		ptr_size;

	ptr_size = 100;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("map error\n", 2);
		return ;
	}
	line1 = get_first_line(fd);
		ptr = malloc(sizeof(char) * ptr_size);

	while ((ret = read(fd, buff, 10000)))
	{
		buff[ret] = '\0';
		ptr = ft_strcat(ptr, buff);
		ptr_size *= 2;
		temp = malloc(sizeof(char) * ptr_size);
		temp = ft_strcpy(temp, ptr);
		free(ptr);
		//*ptr = '\0';
		ptr = malloc(sizeof(char) * ptr_size);
		ptr = ft_strcpy(ptr, temp);
		free(temp);
		//*temp = '\0';
		
	}
	if (!prepare_puzzle(ptr, line1))
		ft_putstr("map error\n", 2);
	free(ptr);
	*ptr = '\0';
	free(line1);
	close(fd);
}

void	do_stdin(void)
{
	char	buff[65000];
	char	*ptr;
	int		ret;
	char	*line1;

	ptr = malloc(sizeof(char) * 1cd 0000001);
	line1 = get_first_line(0);
	while ((ret = read(0, buff, 10000)))
	{
		buff[ret] = '\0';
		ptr = ft_strcat(ptr, buff);
	}
	if (!prepare_puzzle(ptr, line1))
		ft_putstr("map error\n", 2);
	free(line1);
	free(ptr);
	*ptr = '\0';
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		do_stdin();
	else
	{
		while (i < argc)
		{
			file_loop(argv[i]);
			i++;
		}
	}
	return (0);
}
