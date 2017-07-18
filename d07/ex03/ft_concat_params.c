/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:42:09 by tjose             #+#    #+#             */
/*   Updated: 2016/11/02 18:21:10 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	fill_array(char *arr, char **argv)
{
	int i;
	int j;
	int k;

	i = 1;
	j = 0;
	k = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			arr[k] = argv[i][j];
			k++;
			j++;
		}
		j = 0;
		arr[k] = '\n';
		k++;
		i++;
	}
	arr[k] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		total;
	char	*arr;

	i = 1;
	j = 0;
	total = argc;
	if (argc == 0)
		return (NULL);
	while (argv[i])
	{
		while (argv[i][j])
		{
			total++;
			j++;
		}
		j = 0;
		i++;
	}
	i = 1;
	arr = (char*)malloc(total + 1);
	fill_array(arr, argv);
	return (arr);
}
