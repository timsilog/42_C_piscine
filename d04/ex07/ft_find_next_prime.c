/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:47:36 by tjose             #+#    #+#             */
/*   Updated: 2016/10/30 16:43:53 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		loop_check(int nb)
{
	int guess;

	guess = 5;
	while (guess * guess <= nb)
	{
		if (nb % 3 == 0)
			return (0);
		if (nb % guess == 0)
			return (0);
		if (nb % (guess + 2) == 0)
			return (0);
		guess += 6;
	}
	return (1);
}

int		ft_is_prime(int nb)
{
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 3 == 0 || nb % 2 == 0 || nb < 2)
		return (0);
	if (!loop_check(nb))
		return (0);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int check;
	int flag;

	flag = 0;
	check = nb;
	while (flag == 0)
	{
		flag = ft_is_prime(check);
		if (flag == 0)
			check++;
	}
	return (check);
}
