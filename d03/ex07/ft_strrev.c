/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:23:30 by tjose             #+#    #+#             */
/*   Updated: 2016/10/28 22:24:18 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_strrev(char *str)
{
	int		length;
	int		place;
	char	hold;

	length = 0;
	place = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	length--;
	while (length > place)
	{
		hold = str[place];
		str[place] = str[length];
		str[length] = hold;
		length--;
		place++;
	}
	return (str);
}
