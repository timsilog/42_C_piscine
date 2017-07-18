/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 12:49:55 by tjose             #+#    #+#             */
/*   Updated: 2016/10/28 12:53:39 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0 || nb > 16)
	{
		return (0);
	}
	else
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
