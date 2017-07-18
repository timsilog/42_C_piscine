/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:38:26 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 12:20:58 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *temp;
	t_list *head;

	head = *begin_list;
	temp = ft_create_elem(data);
	if (!(*begin_list))
		return ;
	if (cmp(temp->data, (*begin_list)->data) == -1)
	{
		head = temp;
		temp->next = *begin_list;
	}
	else
	{
		loop_check(begin_list, temp, cmp);
	}
	*begin_list = head;
}
