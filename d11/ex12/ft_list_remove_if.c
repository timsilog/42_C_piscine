/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:27:58 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 01:27:09 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	remove_middle(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;

	while ((*begin_list)->next)
	{
		if (!cmp((*begin_list)->next->data, data_ref))
		{
			temp = (*begin_list)->next->next;
			free((*begin_list)->next);
			(*begin_list)->next = temp;
		}
		else
			*begin_list = (*begin_list)->next;
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;
	t_list *head;

	if (!begin_list)
		return ;
	head = *begin_list;
	while (!cmp((*begin_list)->data, data_ref))
	{
		temp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = temp;
		head = temp;
	}
	if ((*begin_list)->next)
		remove_middle(begin_list, data_ref, cmp);
	*begin_list = head;
}
