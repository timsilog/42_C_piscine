/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_rb_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:21:45 by tjose             #+#    #+#             */
/*   Updated: 2016/11/11 14:26:57 by tjose            ###   ########.fr       */
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
