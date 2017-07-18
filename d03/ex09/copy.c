/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 21:40:33 by tjose             #+#    #+#             */
/*   Updated: 2016/10/27 22:52:39 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int left, int right)
{
	int temp;

	temp = tab[left];
	tab[left] = tab[right];
	tab[right] = temp;
}

void	quick_sort(int *tab, int left, int right)
{
	int beg;
	int end;
	int pivot;

	beg = left;
	end = right;
	if (beg < end)
	{
		// set pivot to beginning
		pivot = tab[beg];
		while (end > beg)
		{
			//look for first element greater than pivot from left
			while (tab[beg] <= pivot && beg <= right && end > beg)
			{
				beg++;
			}
			//look for first element less than pivot from the right
			while (tab[end] > pivot && end >= left && end >= beg)
			{
				end--;
			}
			if (beg < end)
			{
				swap(tab, beg, end);
			}
		}
		swap(tab, left, end); // indices have crossed move pivot to center, end is location of pivot
		quick_sort(tab, left, end - 1); // left partition
		quick_sort(tab, end + 1, right); // right partition
	}
}

void	ft_sort_integer_table(int *tab, int size)
	{
		int *left;
		int *right;
		int i;
		
		// move pointer to end
		i = 0;
		left = tab;
		right = tab;
		while (i++ < size - 1)
		{
			right++;
		}
		i = 0;
		quick_sort(tab, i , size);



	}
