/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:38:37 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 18:09:06 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*recur_reverse(t_list **begin_list, t_list *head)
{
	if (!(*begin_list)->next->next)
	{
		head = (*begin_list)->next;
		(*begin_list)->next->next = *begin_list;
		return (head);
	}
	head = recur_reverse(&(*begin_list)->next, head);
	(*begin_list)->next->next = (*begin_list);
	return (head);
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list *head;

	if (!(*begin_list)->next)
		return ;
	head = *(begin_list);
	head = recur_reverse(&(*begin_list), head);
	(*begin_list)->next = NULL;
	*begin_list = head;
}
