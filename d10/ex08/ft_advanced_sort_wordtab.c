/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:28:15 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 22:33:17 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;

	if (!tab[0])
		return ;
	i = 1;
	while (tab[i])
	{
		j = 1;
		while (tab[j])
		{
			if (cmp(tab[j - 1], tab[j]))
				swap(&tab[j - 1], &tab[j]);
			j++;
		}
		i++;
	}
}
