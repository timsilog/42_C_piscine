/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:58:30 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 16:26:42 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main()
{
	t_list *temp = ft_create_elem("1");
	ft_list_push_front(&temp, "2");
	ft_list_push_front(&temp, "3");
	temp = ft_list_last(temp);
	printf ("%s", temp->data);
	return 0;
}
