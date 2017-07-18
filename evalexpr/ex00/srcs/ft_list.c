/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:00:57 by tjose             #+#    #+#             */
/*   Updated: 2016/11/13 22:14:23 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

t_stack	*ft_create_elem(int data, int op)
{
	t_stack *list;

	list = malloc(sizeof(list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
		list->is_op = op;
	}
	return (list);
}

void	ft_push(t_stack **begin_list, int data, int op)
{
	t_stack *temp;

	temp = (ft_create_elem(data, op));
	if (!*begin_list)
	{
		*begin_list = temp;
		return ;
	}
	temp->next = *begin_list;
	*begin_list = temp;
}

void	ft_pop(t_stack **begin_list)
{
	t_stack *temp;

	temp = 0;
	if ((*begin_list)->next)
		temp = (*begin_list)->next;
	free(*begin_list);
	*begin_list = temp;
}

void	ft_add(t_stack **begin_list, int data, int op)
{
	t_stack *head;
	t_stack *temp;

	temp = (ft_create_elem(data, op));
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
