/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 16:42:46 by tjose             #+#    #+#             */
/*   Updated: 2016/10/31 20:32:40 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (size == 0)
		return (size);
	while (dest[i] != '\0')
		i++;
	while (i < size - 1)
	{
		if (src[j] == '\0')
			break ;
		else
			dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[j++] != '\0')
		i++;
	return (size + i - 1);
}
