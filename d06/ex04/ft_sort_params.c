/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:56:56 by tjose             #+#    #+#             */
/*   Updated: 2016/11/01 22:08:54 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		str_cmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == '\0' || s2[i] == '\0')
				break ;
			i++;
		}
	}
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (0);
	return (0);
}

void	print_args(char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (argv[i] != '\0')
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;
	int		flag;

	i = 1;
	j = 0;
	while (i++ < argc && (1 > (j = 0)))
	{
		flag = 0;
		while (++j < argc - 1)
		{
			if (str_cmp(argv[j], argv[j + 1]))
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
			break ;
	}
	print_args(argv);
	return (0);
}
