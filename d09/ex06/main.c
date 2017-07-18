/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 00:00:33 by tjose             #+#    #+#             */
/*   Updated: 2016/11/04 02:01:24 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
void	ft_destroy(char ***factory);
int main()
{
	//int ***alpha;
	//int i;
	//int j;
	int x=5,y=5,z=5;
	char ***b;
	int j;
	int i = -1;
		b = (char***)malloc(sizeof(char**) * x);
	while (++i < x)
	{
		j = -1;
		b[i] = (char**)malloc(y * sizeof(char*));
		while (++j < y)
		{
			b[i][j] = (char*)malloc(sizeof(char) * z);
			b[i][5] = NULL;
		}
	}
	b[i-1] = 0;
	b[0][0][1] = 'a';
	printf("%c",b[0][0][1]);
	printf("wtf");
	ft_destroy(b);
  return 0;
 }
