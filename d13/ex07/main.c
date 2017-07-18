/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:22:22 by tjose             #+#    #+#             */
/*   Updated: 2016/11/12 14:46:02 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

int		ft_strcmp(void *ss1, void *ss2)
{
	int i;
	char *s1 = ss1;
	char *s2 = ss2;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	return (0);
}

void	tri(void *item, int current_level, int is_first_elem)
{
	printf("item = %s\n", item);
	printf("level = %d\n",current_level);
	printf("is_first = %d\n\n",is_first_elem);
}

void	ft_putstr(void *str)
{
	printf("%s", str);
}

int main()
{
	t_btree *temp;
	//t_btree *empty = NULL;
	temp = btree_create_node("50 ");
	temp->left = btree_create_node("30 ");
	temp->left->left = btree_create_node("10 ");
	temp->left->right = btree_create_node("40 ");
	temp->right = btree_create_node("70 ");
	temp->left->left->left = btree_create_node("1 ");
	temp->right->right = btree_create_node("123");
	temp->right->right->right = btree_create_node("432");
	temp->right->right->right->right = btree_create_node("asdsad");
	btree_apply_by_level(temp, &tri);
	//btree_apply_by_level(empty, &tri);
	return 0;
}
