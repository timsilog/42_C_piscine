/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:25:52 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 21:52:38 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sort_wordtab.c"
#include "ft_split_whitespaces.c"

int main (int argc, char **argv)
{
	(void) argc;
	char **a = ft_split_whitespaces(argv[1]);
	ft_sort_wordtab(a);
	int i = 0;
	while (a[i])
		printf("%s\n",a[i++]);
	return (0);
}
