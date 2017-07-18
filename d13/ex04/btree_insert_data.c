/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:48:59 by tjose             #+#    #+#             */
/*   Updated: 2016/11/11 17:16:34 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (cmpf(item, (*root)->item) >= 0)
		{
			if (!(*root)->right)
				(*root)->right = btree_create_node(item);
			else
				btree_insert_data(&(*root)->right, item, cmpf);
		}
		else if (cmpf(item, (*root)->item) == -1)
		{
			if (!(*root)->left)
				(*root)->left = btree_create_node(item);
			else
				btree_insert_data(&(*root)->left, item, cmpf);
		}
	}
	else
		*root = btree_create_node(item);
}
