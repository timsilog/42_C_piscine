/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:25:15 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 18:45:18 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	fun(void *data)
{

	printf("%s\n", data);
}

int main(int argc, char **argv)
{
	t_list *temp;
	temp = ft_list_push_params(argc, argv);
	ft_list_foreach(temp, &fun);
	printf("%s", temp->data);
	return 0;
}
