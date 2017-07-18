/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 19:15:59 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 19:30:53 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

void	print_err(char *name)
{
	ft_putstr("cat: ", 2);
	ft_putstr(name, 2);
	if (errno == 2)
		ft_putstr(": No such file or directory\n", 2);
	if (errno == 13)
		ft_putstr(": Permission denied\n", 2);
	if (errno == 21)
		ft_putstr(": Is a directory\n", 2);
}
