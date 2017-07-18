/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:33:33 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 01:45:06 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	swap(t_list **begin_list)
{
	void	*temp;

	temp = (*begin_list)->data;
	(*begin_list)->data = (*begin_list)->next->data;
	(*begin_list)->next->data = temp;
	*begin_list = (*begin_list)->next;
}

void	bubble_sort(t_list **begin_list, int (*cmp)(), int length)
{
	int		i;
	int		j;
	t_list	*head;

	if (!*begin_list)
		return ;
	head = *begin_list;
	i = 0;
	while (++i < length)
	{
		j = 0;
		while (++j < length)
		{
			if (cmp((*begin_list)->data, (*begin_list)->next->data) > 0)
				swap(begin_list);
			else
				*begin_list = (*begin_list)->next;
		}
		*begin_list = head;
	}
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*temp;
	int		length;

	temp = *begin_list;
	length = 0;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	bubble_sort(begin_list, cmp, length);
}
