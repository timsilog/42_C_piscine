/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:44:26 by tjose             #+#    #+#             */
/*   Updated: 2016/11/16 21:03:46 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int all[2048];
	int i = 0;
	int j = 0;
	int *p = all;

	while (i < 2048)
		all[i++] = 0;//fill the array we'll be working on with zeroes

	i = 0;
	if (argc == 2) //only 1 argument allowed
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '>')
				p++;
			else if (argv[1][i] == '<')
				p--;
			else if (argv[1][i] == '+')
				(*p)++;
			else if (argv[1][i] == '-')
				(*p)--;
			else if (argv[1][i] == '.')
				write(1, p, 1);
			else if (argv[1][i] == '[') // if open bracket
			{
				if (*p == 0) // while loop done
				{
					while (argv[1][j] != ']') // jump to matching close bracket
					{
						i++;
						if (argv[1][i] == '[')
							j++;
						if (argv[1][i] == ']')
						{
							if (j == 0)
								break ;
							j--;
						}
						printf("asd");
					}
				}
			}
			else if (argv[1][i] == ']')
			{
				if (*p != 0)
				{
					while (i > 0)
					{
						i--;
						if (argv[1][i] == ']')
							j++;
						if (argv[1][i] == '[')
						{
							if (j == 0)
								break ;
							j--;
						}
					}
				}
			}
			i++;
		}
	}
	else
		write(1, "\n", 2);
	return (0);
}
