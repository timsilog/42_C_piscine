/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:38:08 by tjose             #+#    #+#             */
/*   Updated: 2016/11/01 20:52:27 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int count;
	int j;

	count = 0;
	j = 0;
	while (argv[count] != '\0')
		count++;
	count--;
	while (count > 0)
	{
		while (argv[count][j] != '\0')
			ft_putchar(argv[count][j++]);
		j = 0;
		count--;
		ft_putchar('\n');
	}
	return (0);
}
