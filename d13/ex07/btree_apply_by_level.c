/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 00:59:14 by tjose             #+#    #+#             */
/*   Updated: 2016/11/11 14:08:45 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int left;
	int right;

	left = 1;
	right = 1;
	if (root->left)
		left += btree_level_count(root->left);
	if (root->right)
		right += btree_level_count(root->right);
	if (left > right)
		return (left);
	else
		return (right);
}

void	apply_next(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem),
		int level[2], int is_first_elem)
{
	if (level[1] == level[0])
	{
		applyf(root->item, level[1], is_first_elem);
		return ;
	}
	else
		level[1]++;
	if (root->left)
		apply_next(root->left, applyf, (level), 1);
	if (root->right)
		apply_next(root->right, applyf, (level), 0);
	level[1]--;
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	int level[2];
	int height;

	if (!root)
		return ;
	height = btree_level_count(root);
	level[0] = 0;
	while (level[0] < height)
	{
		level[1] = 0;
		apply_next(root, applyf, level, 1);
		level[0]++;
	}
}
