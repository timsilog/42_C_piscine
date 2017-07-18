/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:58:30 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 22:06:31 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main()
{
	t_list *temp1 = ft_create_elem("1");
	ft_list_push_front(&temp1, "2");
	ft_list_push_front(&temp1, "3");
	
	t_list *temp2 = ft_create_elem("x");
	ft_list_push_front(&temp2, "y");
	ft_list_push_front(&temp2, "z");

	ft_list_merge(&temp1, temp2);
	while (temp1)
	{
		printf ("%s", temp1->data);
		temp1 = temp1->next;
	}
	return 0;
}
