/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:52:11 by tjose             #+#    #+#             */
/*   Updated: 2016/11/14 21:00:54 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

int		arr_list_cmp(char str[], t_list *list)// similar to ft_strcmp, but with a linked list
{
	int i;

	i = 0;
	while (list)
	{
		if (str[i] != list->data)
			return (0);
		i++;
		list = list->next;
	}
	return (1);
}

// this will take our calculated width and height and recreate the specified individual rush into the array "str[]" for us to compare our linked list to
int		check_rush(t_list *list, int width, int height, int num)
{
	char	str[width * height + height];

	if (num == 0)
		rush00(width, height, str);
	else if (num == 1)
		rush01(width, height, str);
	else if (num == 2)
		rush02(width, height, str);
	else if (num == 3)
		rush03(width, height, str);
	else if (num == 4)
		rush04(width, height, str);
	if (arr_list_cmp(str, list)) // <- compare our linked list to the rush inside the array
		return (1);
	return (0);
}
