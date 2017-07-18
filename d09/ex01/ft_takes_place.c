/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:43:29 by tjose             #+#    #+#             */
/*   Updated: 2016/11/04 13:11:35 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h;

	h = hour;
	if (h > 12)
		h -= 12;
	if (h == 0)
		h = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", h, hour + 1);
	else if (hour == 11)
		printf("%d.00 A.M. AND %d.00 P.M.\n", h, h + 1);
	else if (hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", h, hour - 11);
	else if (hour == 23)
		printf("%d.00 P.M. AND %d.00 A.M.\n", h, h + 1);
	else if (hour == 24)
		printf("%d.00 A.M. AND %d.00 A.M.\n", h, h - 11);
}
