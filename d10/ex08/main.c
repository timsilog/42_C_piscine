/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:25:52 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 22:22:30 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_advanced_sort_wordtab.c"
#include "ft_split_whitespaces.c"

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
	if (s1[i] > s2[i])
		return (1);
	return (0);
}

int main (int argc, char **argv)
{
	(void) argc;
	int (*cmp)(char *, char *) = &ft_strcmp;
	char **a = ft_split_whitespaces(argv[1]);
	ft_advanced_sort_wordtab(a, cmp);
	int i = 0;
	while (a[i])
		printf("%s\n",a[i++]);
	return (0);
}
