/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:24:16 by tjose             #+#    #+#             */
/*   Updated: 2016/11/06 19:16:57 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_count_if(char **tab, int (*f)(char*));
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
	char *a[] = {"this", "iaas", "aw", "staing", 0};
	char **b = a;
	printf("%d",ft_count_if(b,is_a));
	return 0;
	
}
