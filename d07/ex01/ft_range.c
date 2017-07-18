/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 13:27:25 by tjose             #+#    #+#             */
/*   Updated: 2016/11/04 15:04:02 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *arr;
	int i;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	arr = (int*)malloc(sizeof(int) * size);
	while (i < size)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
