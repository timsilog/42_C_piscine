/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 19:06:27 by tjose             #+#    #+#             */
/*   Updated: 2016/10/30 20:31:07 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_norm_sec(int width[4], int height)
{
	int i;

	i = 0;
	while (height > 0)
	{
		while (i++ < width[2])
			ft_putchar(' ');
		i = 0;
		width[2]--;
		ft_putchar('/');
		while (i++ < width[0])
			ft_putchar('*');
		i = 0;
		width[0] += 2;
		ft_putchar('\\');
		ft_putchar('\n');
		height--;
	}
}

void	print_door(int r_width, int size, int row)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = size;
	while (i++ < 2)
	{
		while (j++ < r_width)
			ft_putchar('*');
		j = 0;
		if (i == 1)
		{
			while (k > 0)
			{
				if (size > 4 && row == (size / 2 + 1) && k == 2)
					ft_putchar('$');
				else
					ft_putchar('|');
				k--;
			}
		}
	}
}

void	print_door_sec(int size, int width[4], int height)
{
	int i;
	int d_size;

	d_size = size - ((size + 1) % 2);
	while (height > 0)
	{
		i = 0;
		while (i++ < width[2])
			ft_putchar(' ');
		i = 0;
		width[2]--;
		ft_putchar('/');
		if (height <= d_size)
			print_door((width[0] - d_size) / 2, d_size, height);
		else
		{
			while (i++ < width[0])
				ft_putchar('*');
		}
		width[0] += 2;
		ft_putchar('\\');
		ft_putchar('\n');
		height--;
	}
}

void	print_it(int size, int width[4], int og_size)
{
	int height;

	height = size + 2;
	width[2] += height;
	width[2] += width[3];
	if (size % 2 == 0)
		width[3] += 1;
	if (size == 0)
	{
		width[3] = 2;
		return ;
	}
	print_it(size - 1, width, og_size);
	if (size == og_size)
		print_door_sec(size, width, height);
	else
		print_norm_sec(width, height);
	width[0] += width[1];
	width[2] -= width[3];
	if (size % 2 == 0)
	{
		width[1] += 2;
		width[3]++;
	}
}

void	sastantua(int size)
{
	int width[4];

	width[0] = 1;
	width[1] = 4;
	if (size % 2 == 0)
	{
		width[2] = size / 2 - 4;
		width[3] = 0;
	}
	else
	{
		width[2] = size - 4;
		width[3] = 0;
	}
	if (size < 1)
		return ;
	print_it(size, width, size);
}
