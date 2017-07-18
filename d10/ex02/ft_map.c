/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:19:31 by tjose             #+#    #+#             */
/*   Updated: 2016/11/06 18:20:48 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *map;

	i = 0;
	map = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
