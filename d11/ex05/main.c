/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:47:18 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 16:44:48 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	t_list *temp = ft_list_push_params(argc, argv);
	while (temp)
	{
		printf("%s\n",temp->data);
			temp = temp->next;
	}
	return 0;
}
