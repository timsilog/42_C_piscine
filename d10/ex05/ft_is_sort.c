/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:38:58 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 17:36:41 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int ascending;
	int descending;

	ascending = 1;
	descending = 1;
	i = 1;
	while (i < length)
	{
		if ((f(tab[i - 1], tab[i])) < 0)
			ascending = 0;
		i++;
	}
	i = 0;
	while (i < length)
	{
		if ((f(tab[i - 1], tab[i])) > 0)
			descending = 0;
	}
	if (ascending || descending)
		return (1);
	return (0);
}
