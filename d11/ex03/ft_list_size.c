/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:54:30 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 23:12:11 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int counter;

	if (!begin_list)
		return (0);
	counter = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		counter++;
	}
	return (counter);
}
