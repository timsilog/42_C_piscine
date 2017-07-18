/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:38:04 by tjose             #+#    #+#             */
/*   Updated: 2016/11/08 02:34:09 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include <unistd.h>

struct		s_opp
{
	char	*op;
	int		(*fun)(int, int);
};
typedef	struct s_opp	t_opp;
void		ft_putchar(char c);
int			ft_add(int n1, int n2);
int			ft_sub(int n1, int n2);
int			ft_mul(int n1, int n2);
int			ft_div(int n1, int n2);
int			ft_mod(int n1, int n2);
void		ft_putnbr(int n);
int			ft_usage(int n1, int n2);
void		get_args(char **argv, int *n1, int *n2, char **op);

#endif
