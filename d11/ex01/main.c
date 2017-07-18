/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:43:53 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 23:07:28 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main()
{
	t_list *temp = NULL;
	//temp = ft_create_elem("this is the data");
	ft_list_push_back(&temp, "more data");
	printf("%s",temp->data);
	return (0);
}
