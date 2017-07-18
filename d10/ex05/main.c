/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:46:35 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 11:52:05 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int , int));

int compare(int n1, int n2)
{
	if (n1 < n2)
		return 1;
	return 0;
}

int main()
{
	int a[] = {1,2,3,4,5,6,7};
	int *p = a;
	printf("%d",ft_is_sort(p, 7, compare));
	return (0);
}
