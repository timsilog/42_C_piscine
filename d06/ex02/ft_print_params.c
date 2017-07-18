/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:31:46 by tjose             #+#    #+#             */
/*   Updated: 2016/11/01 20:56:23 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 0;
	i = 1;
	while (argv[i] != '\0')
	{
		while (argv[i][j] != '\0')
			ft_putchar(argv[i][j++]);
		j = 0;
		i++;
		ft_putchar('\n');
	}
	return (0);
}
