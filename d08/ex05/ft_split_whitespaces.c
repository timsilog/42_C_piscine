/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:10:04 by tjose             #+#    #+#             */
/*   Updated: 2016/11/03 16:12:20 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (is_whitespace(str[i]) && str[i] != '\0')
			i++;
		if (!(is_whitespace(str[i])) && str[i] != '\0')
		{
			count++;
			while (!(is_whitespace(str[i])) && str[i] != '\0')
				i++;
		}
	}
	return (count);
}

int		length(char *str, int location)
{
	int counter;

	counter = 0;
	while ((!(is_whitespace(str[location]))) && str[location] != '\0')
	{
		location++;
		counter++;
	}
	return (counter);
}

char	**get_it(char *str, int num_words)
{
	int		i[3];
	char	**arr;

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	arr = (char**)malloc(sizeof(char*) * num_words + 1);
	while (is_whitespace(str[i[2]]) && str[i[2]] != '\0')
		i[2]++;
	while (str[i[2]] != '\0')
	{
		while (is_whitespace(str[i[2]]) && str[i[2]] != '\0')
			i[2]++;
		arr[i[0]] = (char*)malloc(sizeof(char) * length(str, i[2]) + 1);
		while (!(is_whitespace(str[i[2]])) && str[i[2]] != '\0')
		{
			arr[i[0]][i[1]] = str[i[2]++];
			i[1]++;
		}
		arr[i[0]++][i[1]] = '\0';
		i[1] = 0;
	}
	arr[i[0]] = (char*)malloc(sizeof(char) + 1);
	arr[i[0]] = 0;
	return (arr);
}

char	**ft_split_whitespaces(char *str)
{
	int		num_words;
	int		i;
	int		flag;
	char	**arr;

	flag = 0;
	i = 0;
	num_words = count_words(str);
	arr = get_it(str, num_words);
	return (arr);
}
