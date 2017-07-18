/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 13:58:31 by tjose             #+#    #+#             */
/*   Updated: 2016/11/04 15:03:42 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = (int*)malloc(sizeof(int) * size);
	while (i < size)
	{
		(*range)[i] = min++;
		i++;
	}
	return (size);
}
