/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:21:28 by tjose             #+#    #+#             */
/*   Updated: 2016/11/06 18:21:18 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int*tab, int length, int(*f)(int));
int	add(int n)
{
	return ++n;
}

int main()
{
	int *end;
	int arr[5] = {1,2,3,4,5};
	int *p = arr;
	end = ft_map(p, 5, &add);
	int i = 0;
	while (i < 5)
	{
		printf("%d, ",end[i]);
		i++;
	}
}

