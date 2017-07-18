/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:16:59 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 23:10:23 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = (ft_create_elem(data));
	if (!*begin_list)
	{
		*begin_list = temp;
		return ;
	}
	temp->next = *begin_list;
	*begin_list = temp;
}
