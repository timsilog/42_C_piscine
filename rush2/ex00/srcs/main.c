/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 23:10:52 by tjose             #+#    #+#             */
/*   Updated: 2016/11/14 21:00:37 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

int		get_width(t_list *list) // look through the list until the first newline
{
	int		width;

	width = 0;
	if (list)
	{
		while (list->data != '\n')
		{
			width++;
			list = list->next;
		}
	}
	return (width);
}

int		get_height(t_list *list) // count the number of newlines
{
	int		height;

	height = 0;
	if (list)
	{
		while (list)
		{
			if (list->data == '\n')
				height++;
			list = list->next;
		}
	}
	return (height);
}
// CHECK ALL 5 RUSHES
int		check_rushes(t_list *list, int width, int height)
{
	int		multi_flag;
	int		i;
	int		success_flag;

	i = 0;
	multi_flag = 0;
	success_flag = 0;
	if (width == 0 || height == 0) // if wodth or height is 0, return false
		return (success_flag);
	while (i < 5) // try all 5 rushes
	{
		if (check_rush(list, width, height, i))
		{ //if any rush returns "true" then enable both flags and print that particular rush
			print_rush(width, height, multi_flag, i); // print the rush
			multi_flag = 1;
			success_flag = 1;
		}
		i++;
	}
	return (success_flag);
}

int		main(void)
{
	char	buff[1];
	t_list	*list;
	int		width;
	int		height;

	while ( (read(0, buff, 1))) // read whatever's piped into the program
		ft_list_push_back(&list, *buff); // make our linked list
	list = list->next;
	width = get_width(list); // width up to first new line
	height = get_height(list); // hieght is sum of all newlines
	if (check_rushes(list, width, height)) // check ALL 5 RUSHES
		ft_putchar('\n'); // if "success flag" returns true print newline
	else
		ft_putstr("aucune\n"); //otherwise print aucune
	ft_list_clear(&list);
	return (0);
}
