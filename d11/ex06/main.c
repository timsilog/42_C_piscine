/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:47:18 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 17:05:50 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	t_list *temp = ft_list_push_params(argc, argv);
	ft_list_clear(&temp);
	if (!temp)
		printf("worked mutha fucka");
	return 0;
}
