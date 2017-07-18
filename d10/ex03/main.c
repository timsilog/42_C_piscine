/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:24:16 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 20:08:52 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_any(char **tab, int (*f)(char*));
int	is_a(char* a)
{
	int i = 0;
	while (a[i])
	{
		if (a[i] == 'a')
			return 1;
		i++;
	}
	return 0;
}	

int	main()
{
	char *a[] = {"this", "is", "w", "string", 0};
	char **b = a;
	printf("%d",ft_any(b,is_a));
	return 0;
	
}
