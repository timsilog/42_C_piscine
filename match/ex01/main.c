/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:04:12 by tjose             #+#    #+#             */
/*   Updated: 2016/11/05 21:59:21 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		nmatch(char *s1, char *s2);
int main()
{
	int i = 0;
	i += nmatch("abcbd","*b*");
	printf("%d",i);
	return (0);
}
