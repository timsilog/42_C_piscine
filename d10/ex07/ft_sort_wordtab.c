/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:16:36 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 22:06:39 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	return (0);
}

void	swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[j - 1], tab[j]))
				swap(&tab[j - 1], &tab[j]);
			j++;
		}
		i++;
	}
}
