/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:33:18 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 23:09:28 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *head;
	t_list *temp;

	temp = (ft_create_elem(data));
	if (!*begin_list)
	{
		*begin_list = temp;
		return ;
	}
	head = *begin_list;
	while ((*begin_list)->next)
	{
		*begin_list = (*begin_list)->next;
	}
	(*begin_list)->next = temp;
	*begin_list = head;
}
