/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 21:40:33 by tjose             #+#    #+#             */
/*   Updated: 2016/11/01 22:08:55 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int left, int right)
{
	int		temp;

	temp = tab[left];
	tab[left] = tab[right];
	tab[right] = temp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int		left;
	int		right;

	left = 0;
	right = size;
	while (left < size)
	{
		while (right > left)
		{
			if (tab[left] > tab[right])
			{
				swap(tab, left, right);
			}
			right--;
		}
		left++;
		right = size;
	}
}
