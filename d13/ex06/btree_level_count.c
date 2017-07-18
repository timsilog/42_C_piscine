/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:53:27 by tjose             #+#    #+#             */
/*   Updated: 2016/11/11 13:51:26 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int left;
	int right;

	left = 1;
	right = 1;
	if (!root)
		return (0);
	if (root->left)
		left += btree_level_count(root->left);
	if (root->right)
		right += btree_level_count(root->right);
	if (left > right)
		return (left);
	else
		return (right);
}
