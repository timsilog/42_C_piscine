/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:06:54 by tjose             #+#    #+#             */
/*   Updated: 2016/11/13 00:40:24 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH0_H
# define RUSH0_H
# include <unistd.h>

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	do_rush00(int x, int y);
void	do_rush01(int x, int y);
void	do_rush02(int x, int y);
void	do_rush03(int x, int y);
void	do_rush04(int x, int y);
void	printlines(int x, char left, char middle, char right);
int		ft_atoi(char *str);
#endif
