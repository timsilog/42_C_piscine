/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:10:04 by tjose             #+#    #+#             */
/*   Updated: 2016/11/02 22:30:15 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\v' || c == '\t' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i] != '\0')
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

	while((!(is_whitespace(str[location]))) && str[location] != '\0')
	{
		location++;
		counter++;
	}
	return (counter);
}

int main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		num_words;
	char	**arr;
	char	*str;

	argc = 0;
	str = argv[1];
	i = 1;
	j = 0;
	k = 0;
	num_words = count_words(str);
	arr = (char**)malloc(sizeof(char*) * num_words + 6);
	printf("numwords = %d\n",num_words);
	while (str[k] != '\0')
	{
		
		while (is_whitespace(str[k]) && str[k] != '\0')
			k++;
		arr[i] = (char*)malloc(sizeof(char) * length(str, k) + 1);
		printf ("length = %d\n",length(str, k));
		while (!(is_whitespace(str[k])) && str[k] != '\0')
		{
			printf("str[k] = %c\n",str[k]);
			arr[i][j] = str[k];
			k++;
			j++;
		}
		arr[i][j] = '\0';
		i++;
		j = 0;
	}
	arr[i] = (char*)malloc(sizeof(char) + 1);
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	arr[i][j] = '0';
	printf ("%c",arr[i][j]);
	return (0);
}
