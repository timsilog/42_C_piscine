/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:47:18 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 18:09:11 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	t_list *temp = ft_list_push_params(argc, argv);
	ft_list_reverse(&temp);
	printf("%s",temp->next->data);
	return 0;
}
