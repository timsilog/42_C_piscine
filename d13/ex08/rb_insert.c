/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:27:46 by tjose             #+#    #+#             */
/*   Updated: 2016/11/11 15:27:59 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree_rb.h"

t_rb_node	*btree_rb_create_node(void *data)
{
	t_rb_node *temp;

	temp = malloc(sizeof(t_br_node));
	if (temp)
	{
		temp->parent = 0;
		temp->left = 0;
		temp->right = 0;
		temp->data = data;
		color = 1;
	}
	return (temp);
}

void	rb_insert(struct s_rb_node **root, void *data, int (*cmpf)(void *, void *))
{
	t_rb_node *temp;
	t_rb_node *head;

	head = *root;
	temp = btree_rb_create_node(data);
	if (root)
	{
		if (cmpf(data, (*root)->data) > -1)
		{
			// if equual or greater go right
			recur_insert((*root)->right, data, cmpf);
		}
		else if (cmpf(data, (*root)->data) == -1)
		{
			// if less than go left
		}
	}
	else
		*root = temp;
}
