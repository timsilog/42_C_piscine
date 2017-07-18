/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:43:31 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 01:32:33 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *head;

	if (!*begin_list1)
		*begin_list1 = begin_list2;
	head = *begin_list1;
	while ((*begin_list1)->next)
		*begin_list1 = (*begin_list1)->next;
	(*begin_list1)->next = begin_list2;
	*begin_list1 = head;
}
