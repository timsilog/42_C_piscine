/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 23:12:49 by tjose             #+#    #+#             */
/*   Updated: 2016/11/01 13:59:37 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	make_base_num(char *str, char *base)
{
	int i;
	int j;
	int num;

	i = 0;
	j = 0;
	num = 0;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
			{
				num = num * 10 + j;
			}
			j++;
		}
		j = 0;
		i++;
	}
	if (str[0] == '-')
		num = -num;
	return (num);
}

int		not_in_base(char *str, char *base, int base_n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				break ;
			j++;
		}
		if (j == base_n)
			return (1);
		j = 0;
		i++;
	}
	return (0);
}

int		is_invalid(char *base)
{
	int i;
	int j;

	i = -1;
	while (base[++i] != '\0' && (1 > (j = 0)))
	{
		while (base[j] != '\0')
		{
			if (i != j && base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '\n' || base[i] == '\t' || base[i] == '\v' ||
				base[i] == '\r' || base[i] == '\f' || base[i] == '-'
				|| base[i] == '+')
			return (1);
	}
	return (0);
}

long	to_decimal(long nb, int base_n)
{
	int counter;
	int dec_n;
	int power[3];
	int length;

	counter = 0;
	dec_n = 0;
	power[0] = 0;
	power[1] = 0;
	power[2] = 1;
	length = 0;
	while (nb)
	{
		while (power[0]++ < power[1])
			power[2] *= base_n;
		power[0] = 0;
		power[1]++;
		dec_n += (nb % 10) * power[2];
		power[2] = 1;
		nb /= 10;
	}
	return (dec_n);
}

int		ft_atoi_base(char *str, char *base)
{
	int		base_n;
	long	str_num;
	int		str_len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	base_n = 0;
	str_len = 0;
	str_num = 0;
	while (str[str_len] != '\0')
		str_len++;
	while (base[base_n] != '\0')
		base_n++;
	if (base_n < 2 || str_len < 1 || not_in_base(str, base, base_n)
			|| is_invalid(base))
	{
		return (0);
	}
	str_num = make_base_num(str, base);
	str_num = to_decimal(str_num, base_n);
	return (str_num);
}
