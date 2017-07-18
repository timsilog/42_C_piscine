/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:17:32 by tjose             #+#    #+#             */
/*   Updated: 2016/11/05 21:48:33 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>

void	print_puzzle(char puzzle[][9]);
int		is_safe(int guess, char puzzle[][9], int row, int col);
void	ft_putstr(char *str);
int		solve_it(char puzzle[][9], int row, int col);
void	ft_putchar(char c);
#endif
