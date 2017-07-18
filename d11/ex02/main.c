/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:43:53 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 23:10:47 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main()
{
	t_list *temp;
	//temp = ft_create_elem("this is the data");
	ft_list_push_front(&temp, "more data");
	printf("%s",temp->data);
	return (0);
}
