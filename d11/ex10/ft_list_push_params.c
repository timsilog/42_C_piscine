/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:35:44 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 16:57:05 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*first;
	t_list	*temp;
	int		i;

	first = ft_create_elem(av[0]);
	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			temp = ft_create_elem(av[i]);
			temp->next = first;
			first = temp;
			i++;
		}
	}
	return (first);
}
