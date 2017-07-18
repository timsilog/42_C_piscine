/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:58:30 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 22:21:34 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')	
			break ;
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	return (0);
}

int main()
{
	t_list *temp1 = ft_create_elem("  1 ");
	ft_list_push_front(&temp1, "5 ");
	ft_list_push_front(&temp1, "9");
	ft_list_push_front(&temp1, "3");
	ft_list_push_front(&temp1, "7");
	ft_list_sort(&temp1, &ft_strcmp);

	t_list *temp2 = ft_create_elem("6    ");
	ft_list_push_front(&temp1, "2");
	ft_list_push_front(&temp1, "4");
	ft_list_push_front(&temp1, "9asd9asd9asd ");
	ft_list_push_front(&temp1, "8888 ");
	ft_list_sort(&temp1, &ft_strcmp);


	ft_sorted_list_merge(&temp1, temp2, &ft_strcmp);
	while (temp1)
	{
		printf ("%s", temp1->data);
		temp1 = temp1->next;
	}
	return 0;
}
