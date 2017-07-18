/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:55:53 by tjose             #+#    #+#             */
/*   Updated: 2016/11/04 14:00:06 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\n' | c == '\t' || c == '\r'
			|| c == '\f' || c == '\v')
		return (1);
	else
		return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int end;

	j = 0;
	i = 0;
	end = ft_strlen(s1) - 1;
	while (is_whitespace(s1[j]))
		j++;
	while (is_whitespace(s1[end]))
	{
		s1[end] = '\0';
		end--;
	}
	while (s1[j] == s2[i] && !is_whitespace(s1[j]))
	{
		if (s1[j] == '\0' || s2[i] == '\0')
			break ;
		i++;
		j++;
	}
	if (s1[j] < s2[i] || s1[j] > s2[i])
		return (0);
	return (1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = -1;
	while (++i < argc)
	{
		if (ft_strcmp(argv[i], "president") || ft_strcmp(argv[i], "attack")
				|| ft_strcmp(argv[i], "Powers"))
			ft_putstr("Alert!!!\n");
	}
	return (0);
}
