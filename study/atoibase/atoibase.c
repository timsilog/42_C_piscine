/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoibase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:08:58 by tjose             #+#    #+#             */
/*   Updated: 2016/11/17 16:07:45 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	get_len(long a)
{
	int counter = 0;
	while(a)
	{
		a /= 10;
		counter++;
	}
	return counter;
}

char *convert_base(char *result, long holder, int base, int length)
{
	while (holder)
	{
		if (holder % base > 9)
			result[length] = holder % base + 'A' - 10;
		else
			result[length] = holder % base + '0';
		length--;
		holder /= base;
	}
	return result;
}

char *ft_atoi_base(int value, int base)
{
	char *result;
	long holder;
	long rev;
	int	length = 0;
	int neg_flag = 1;

	holder = -1;
	rev = 0;
	if (value < 0)
	{
		if (base == 10)
			neg_flag = 0;
		holder *= value;
	}
	else
		holder = value;
	long temp = holder;
	while (temp)
	{
		length++;
		temp /= base;
	}
	if (!neg_flag)
	{
		result = malloc(sizeof(char) * length + 2);
		result[0] = '-';
		result[length + 1] = '\0';
	}
	else
	{
		result = malloc(sizeof(char) * length + 1);
		result[length] = '\0';
	}
	printf("%ld\n\n",holder);
	result = convert_base(result, holder, base, length - neg_flag);
	return result;
}

int main()
{
	printf("%s\n", ft_atoi_base(-1234455, 11));
	return 0;
}


