/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 19:34:44 by tjose             #+#    #+#             */
/*   Updated: 2016/11/02 15:24:11 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\t'
			|| c == '\r' || c == '\v')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	long	num;
	int		count;
	int		neg_flag;

	count = 0;
	num = 0;
	neg_flag = 0;
	while (is_whitespace(str[count]))
		count++;
	if (str[count] == '-')
	{
		neg_flag = 1;
		count++;
	}
	else if (str[count] == '+')
		count++;
	while (str[count] > 47 && str[count] < 58)
	{
		num *= 10;
		num += (str[count] - 48);
		count++;
	}
	if (neg_flag)
		num = -num;
	return (num);
}
