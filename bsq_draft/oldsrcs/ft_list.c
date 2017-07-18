/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:12:41 by tjose             #+#    #+#             */
/*   Updated: 2016/11/14 20:11:07 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_list	*ft_create_elem(char data)
{
	t_list *list;
	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

void	ft_list_push_back(t_list **begin_list, char data)
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

void	ft_list_push_front(t_list **begin_list, char data)
{
	t_list *temp;

	temp = (ft_create_elem(data));
	temp->next = *begin_list;
	*begin_list = temp;
}

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	if (!(*begin_list))
		return ;
	while ((*begin_list)->next)
	{
		temp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = temp;
	}
	*begin_list = (NULL);
}
