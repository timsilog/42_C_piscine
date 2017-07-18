/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:22:22 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 22:09:20 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	ft_putstr(void *str)
{
	printf("%s",str);
}

int main()
{
	t_btree *temp;
	temp = btree_create_node("hello ");
	temp->left = btree_create_node("world ");
	temp->left->left = btree_create_node(" sfjsdlfj ");
	temp->left->right = btree_create_node(" riiiiight ");
	temp->right = btree_create_node("yee yee yee");
	btree_apply_suffix(temp, &ft_putstr);
}
