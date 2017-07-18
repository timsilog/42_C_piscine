/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dump.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:15:20 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 21:15:31 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMP_H
# define DUMP_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <errno.h>

void	ft_putchar(char c, int o);
void	ft_putstr(char *tr, int o);
int		get_size(char **argv, int i);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	print_hex(char *str, int nb);
void	print_zeroes(int nb);
void	print_char(char *str, int nb);
void	put_hex(int n);
void	print_err(char *name);
void	fill_arr(int argcm, char **argv, char *all);
#endif
