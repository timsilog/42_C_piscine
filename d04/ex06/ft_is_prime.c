/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 14:57:15 by tjose             #+#    #+#             */
/*   Updated: 2016/10/30 16:43:04 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	loop_check(int nb)
{
	int	guess;

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

int	ft_is_prime(int nb)
{
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 3 == 0 || nb % 2 == 0 || nb < 2)
		return (0);
	if (!loop_check(nb))
		return (0);
	return (1);
}
