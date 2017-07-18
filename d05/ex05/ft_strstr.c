/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 20:40:04 by tjose             #+#    #+#             */
/*   Updated: 2016/11/01 15:05:24 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int r_address;

	i = 0;
	j = 0;
	r_address = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			r_address = i;
			while (to_find[j] != '\0')
			{
				if (to_find[j] != str[i + j])
					break ;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[r_address]);
		}
		i++;
	}
	return (0);
}
