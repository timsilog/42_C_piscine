/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:38:04 by tjose             #+#    #+#             */
/*   Updated: 2016/11/07 19:54:52 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include <unistd.h>

void	ft_putchar(char c);
int		plus(int n1, int n2);
int		minus(int n1, int n2);
int		times(int n1, int n2);
int		divide(int n1, int n2);
int		mod(int n1, int n2);
void	ft_putnbr(int n);
int		get_args(char **argv, int *n1, int *n2, char *op);
#endif
