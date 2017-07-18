/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 11:47:20 by tjose             #+#    #+#             */
/*   Updated: 2016/10/31 13:42:27 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_letter(str[i]))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
			while (is_letter(str[i]))
			{
				i++;
				if (str[i] >= 65 && str[i] <= 90)
				{
					str[i] += 32;
				}
			}
		}
		else
			i++;
	}
	return (str);
}
