/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:51:13 by tjose             #+#    #+#             */
/*   Updated: 2016/10/27 21:17:43 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	init_arr(char arr[], int size)
{
	int		counter;
	char	digit;

	counter = 0;
	digit = '0';
	while (counter < size)
	{
		arr[counter++] = digit;
		digit++;
	}
}

int		check_ceil(char top, char arr[], int k, int i)
{
	if (arr[k] == top)
	{
		if (k > 0)
		{
			arr[k] = arr[k - 1] + 1;
		}
		k--;
		if (k == 0)
		{
			i++;
		}
		if (k >= 0)
		{
			arr[k]++;
		}
		top--;
		i = check_ceil(top, arr, k, i);
		top++;
		k++;
		arr[k] = arr[k - 1] + 1;
	}
	return (i);
}

void	loop_it(int n)
{
	int		i;
	int		k;
	char	arr[n];
	char	ceiling;

	ceiling = ':';
	init_arr(arr, n);
	i = 0;
	k = 0;
	while (i <= 10 - n)
	{
		ft_putchar(arr[k++]);
		if (k == n - 1)
		{
			ft_putchar(arr[k]);
			arr[k]++;
			i = check_ceil(ceiling, arr, k, i);
			if (i <= 10 - n)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			k = 0;
		}
	}
}

void	ft_print_combn(int n)
{
	if (n == 1)
	{
		ft_putchar('1');
	}
	else
	{
		loop_it(n);
	}
	ft_putchar('\n');
}
