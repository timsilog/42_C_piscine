/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 11:36:20 by tjose             #+#    #+#             */
/*   Updated: 2016/11/14 21:04:56 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush0.h"

int		main(int argc, char **argv)
{
	int		width;
	int		height;

	if (argc != 3)
		return (1);
	width = ft_atoi(argv[1]);
	height = ft_atoi(argv[2]);
	if (!ft_strcmp(argv[0], "./rush-00")) //depending on which rush name
		do_rush00(width, height);
	if (!ft_strcmp(argv[0], "./rush-01")) // is called from the command line
		do_rush01(width, height);
	if (!ft_strcmp(argv[0], "./rush-02")) // determines which rush to do
		do_rush02(width, height);
	if (!ft_strcmp(argv[0], "./rush-03"))
		do_rush03(width, height);
	if (!ft_strcmp(argv[0], "./rush-04"))
		do_rush04(width, height);
	return (0);
}
