/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:22:22 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 22:27:45 by tjose            ###   ########.fr       */
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

void	ft_putstr(void *str)
{
	printf("%s", str);
}

int main()
{
	t_btree *temp;
	temp = btree_create_node("50 ");
	temp->left = btree_create_node("30 ");
	temp->left->left = btree_create_node("10 ");
	temp->left->right = btree_create_node("40 ");
	temp->right = btree_create_node("70 ");
	btree_insert_data(&temp, "20", &ft_strcmp);
	btree_apply_prefix(temp, &ft_putstr);
}
