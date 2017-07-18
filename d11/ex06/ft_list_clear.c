/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:57:18 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 01:17:59 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	if (!(*begin_list))
		return ;
	while ((*begin_list)->next)
	{
		temp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = temp;
	}
	*begin_list = (NULL);
}
