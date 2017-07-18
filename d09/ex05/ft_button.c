/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 23:07:43 by tjose             #+#    #+#             */
/*   Updated: 2016/11/03 23:27:15 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if ((i < j && j < k) || ((i > j) && (j > k)))
		return (j);
	else if ((j < i && i < k) || ((j > i) && (i > k)))
		return (i);
	else if ((i < k && k < j) || ((i > k) && (k > j)))
		return (k);
	else
		return (0);
}
