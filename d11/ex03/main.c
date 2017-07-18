/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:58:30 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 16:12:50 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main()
{
	t_list *temp = ft_create_elem("1");
	ft_list_push_front(&temp, "2");
	ft_list_push_front(&temp, "3");
	printf ("%d", ft_list_size(temp));
	return 0;
}
