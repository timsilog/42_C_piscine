/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 13:57:29 by tjose             #+#    #+#             */
/*   Updated: 2016/10/31 13:58:10 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lower(char n)
{
	if (n >= 97 && n <= 122)
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_lower(str[i]))
			return (0);
		i++;
	}
	return (1);
}
