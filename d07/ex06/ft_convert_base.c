/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 00:18:05 by tjose             #+#    #+#             */
/*   Updated: 2016/11/03 22:35:57 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <stdlib.h>

void	convert(char *result, int from, int to, int fin)
{
	int remainder;

	if (result == 0)
		return (0);
	remainder = start % to;
	fin = convert( start / to, from, to, fin);
	fin = fin * 10 + remainder;
	return (fin);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int from;
	int to;
	int i;
	int j;
	int holder;
	int neg_flag;
	char *result;
	int temp;
	int power;

	power = 0;
	neg_flag = 0;
	holder = 0;
	i = 0;
	j = 0;
	from = 0;
	to = 0;
	while (base_from[from])
		from++;
	while (base_to[to])
		to++;
	else return (0);
	printf("from = %d\nto = %d\n",from, to);
	//check for sign
	if (nbr[0] == '-')
	{
		neg_flag = 1;
		i++;
	}
	if (nbr[0] == '+')
		i++;
	//create array
	result = (char*)malloc(sizeof(char) * to + 1); // this is wrong, need number of digits in results instead
	//convert nbr from "from" to decimal number
	while (nbr[i] != '\0')
	{
		j = 0;
		power = 0;
		while (base_from[j] != '\0')
		{
			if (nbr[i] == base_from[j])
				holder = holder + (j * get_pow(10, power++));
			j++;
		}
		i++;
	}

	i = 0;
	// recursively convert nbr to "to" number
	convert(result, from, to, 0);
	//allocate memory = to "to"+1 to *nbr and check neg

	if (neg_flag)
	{
		nbr[0] = '-';
		to++;
	}
	temp = holder;
	while (temp)
	{
		i++;
		temp /= 10;
	}
	while (holder)
	{
		result[--i] = base_to[holder % 10];
		holder /= 10;
	}
	return (result);
}
