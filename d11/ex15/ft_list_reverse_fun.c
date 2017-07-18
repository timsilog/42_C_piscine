/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 23:02:47 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 01:44:19 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, int nbr)
{
	int i;

	if (!begin_list)
		return (NULL);
	i = 1;
	while (i < nbr)
	{
		begin_list = begin_list->next;
		i++;
		if (!begin_list)
			return (NULL);
	}
	return (begin_list);
}

void	swap(t_list **left, t_list **right)
{
	void	*temp;

	temp = (*left)->data;
	(*left)->data = (*right)->data;
	(*right)->data = temp;
}

int		get_len(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*left;
	t_list	*right;
	int		length;
	int		i;

	if (!begin_list || !(begin_list)->next)
		return ;
	length = get_len(begin_list);
	left = begin_list;
	right = ft_list_at(begin_list, length);
	i = 0;
	while (i < length)
	{
		swap(&left, &right);
		i++;
		length--;
		left = left->next;
		right = ft_list_at(begin_list, length);
	}
}
