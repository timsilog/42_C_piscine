/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:24:15 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 22:42:03 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	loop_check(t_list **begin_list, t_list *temp, int (*cmp)())
{
	while (*begin_list) //while list1
	{
		if (!(*begin_list)->next) //if the next node is null
		{ // this means we're at the last node and the node from list 2 belongs at the end of the list
			(*begin_list)->next = temp;
			break ;
		}
		else if (cmp(temp->data, (*begin_list)->next->data) == -1)
		{ // if list2 node is less than list1's NEXT node
			temp->next = (*begin_list)->next; //list2's node goes between current list1 node and NEXT list1 node
			(*begin_list)->next = temp;
			break ; // all done! break out
		}
		*begin_list = (*begin_list)->next; // otherwise advance to next node
	}
}

void	ft_sorted_list_insert(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list *head;

	head = *begin_list1; // save first node
	if (!begin_list2)
		return ;
	// do initial check on JUST FIRST node because there's no nodes before this
	if (cmp(begin_list2->data, (*begin_list1)->data) == -1) // call ft_strcmp
	{ // if list2 node is less than list1 node advanced to next node
		head = begin_list2;
		begin_list2->next = *begin_list1; // just place the current into the front and go back!!
	}
	else //otherwise loop through the rest of list1
		loop_check(begin_list1, begin_list2, cmp); // look up
}

// vvv START HERE vvv
void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list *head;
	t_list *temp;

	head = *begin_list1; // save the beginning of list1
	if (!begin_list2)
		return ;
	while (begin_list2) // let's traverse through list 2
	{
		temp = begin_list2->next; 
		ft_sorted_list_insert(begin_list1, begin_list2, cmp); // MERGE CURRENT NODE INTO LIST1
		begin_list2 = temp; // advance to next node in list 2
	}
	*begin_list1 = head; // set pointer back to beginning of list
}
