/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:51:57 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 19:06:25 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	fun (void *data)
{
	printf("%s",data);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	if (s1[i] == s2[i])
		return 1;
	return 0;
}

int main(int argc, char **argv)
{
	t_list *temp;
	temp = ft_list_push_params(argc,argv);
	ft_list_foreach_if(temp, &fun, "target", &ft_strcmp);

	return 0;
}
