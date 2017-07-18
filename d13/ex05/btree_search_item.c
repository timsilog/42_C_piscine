/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:04:08 by tjose             #+#    #+#             */
/*   Updated: 2016/11/11 13:48:39 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree *temp;

	temp = (NULL);
	if (root->left)
		temp = btree_search_item(root->left, data_ref, cmpf);
	if (root)
	{
		if (!cmpf(data_ref, root->item))
			return (root);
	}
	if (root->right)
		temp = btree_search_item(root->right, data_ref, cmpf);
	return (temp);
}
