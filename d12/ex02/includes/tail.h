/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:36:50 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 19:47:25 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAIL_H
# define TAIL_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>

void	ft_putchar(char c, int o);
void	ft_putstr(char *str, int o);
int		ft_atoi(char *str);
int		get_size(char **argv, int i);
void	print_char(char *str, int i);
void	print_arrows(char *str);
void	print_err(char *name);
#endif
