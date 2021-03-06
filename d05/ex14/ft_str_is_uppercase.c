/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 14:00:56 by tjose             #+#    #+#             */
/*   Updated: 2016/10/31 14:01:30 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_upper(char n)
{
	if (n >= 'A' && n <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_upper(str[i]))
			return (0);
		i++;
	}
	return (1);
}
