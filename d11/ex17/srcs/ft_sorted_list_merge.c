/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:24:15 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 13:46:56 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	loop_check(t_list **begin_list, t_list *temp, int (*cmp)())
{
	while (*begin_list)
	{
		if (!(*begin_list)->next)
		{
			(*begin_list)->next = temp;
			break ;
		}
		else if (cmp(temp->data, (*begin_list)->next->data) == -1)
		{
			temp->next = (*begin_list)->next;
			(*begin_list)->next = temp;
			break ;
		}
		*begin_list = (*begin_list)->next;
	}
}

void	ft_sorted_list_insert(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list *head;

	head = *begin_list1;
	if (!begin_list2)
		return ;
	if (cmp(begin_list2->data, (*begin_list1)->data) == -1)
	{
		head = begin_list2;
		begin_list2->next = *begin_list1;
	}
	else
		loop_check(begin_list1, begin_list2, cmp);
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list *head;
	t_list *temp;

	head = *begin_list1;
	if (!begin_list2)
		return ;
	while (begin_list2)
	{
		temp = begin_list2->next;
		ft_sorted_list_insert(begin_list1, begin_list2, cmp);
		begin_list2 = temp;
	}
	*begin_list1 = head;
}
