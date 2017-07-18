/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 11:35:09 by tjose             #+#    #+#             */
/*   Updated: 2016/10/27 15:55:59 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_putchar(char c);
void	ft_print_combn(int n);

int		ft_putchar(char c)
{
	write(1,&c,1);
	return (0);
}

void	init_arr(char arr[], int size)
{
	int counter;
	char digit;

	counter = 0;
	digit = '0';
	while(counter < size)
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
	return i;
}


void	ft_print_combn(int n)
{
	int	i;
	int k;
	char	arr[n];
	char	ceiling = ':';

	if (n == 1)
	{
		ft_putchar('1');
	}
	else
	{
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
				/*if (arr[k] == ':')
				{
					arr[k] = arr[k - 1] + 1;
					k--;
					arr[k]++;
	
					if (arr[k] == '9')
					{
						arr[k] = arr[k - 1] + 1;
						k--;
						arr[k]++;
	
						if (arr[k] == '8')
						{
							arr[k] = arr[k - 1] + 1;
							k--;
							arr[k]++;
							i++;
						}
	
						k++;
						arr[k] =  arr[k - 1] + 1;
					}
	
					k++;
					arr[k] = arr[k - 1] + 1;
				}*/
				if (i <= 10 - n)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				k = 0;
			}
		}
	}
	ft_putchar('\n');
}

int main ()
{
	ft_print_combn(3);
	return 0;
}
