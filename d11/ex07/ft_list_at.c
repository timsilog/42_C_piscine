/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:12:53 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 01:18:37 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	if (!begin_list)
		return (NULL);
	i = 1;
	while (i < nbr)
	{
		begin_list = begin_list->next;
		i++;
		if (!begin_list)
			return (NULL);
	}
	return (begin_list);
}
