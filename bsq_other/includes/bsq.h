/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:15:56 by tjose             #+#    #+#             */
/*   Updated: 2016/11/15 20:54:18 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
void	ft_putchar(char c, int o);
void	ft_putstr(char *str, int o);
char	*ft_strcat(char *dest, char *src);
int		prepare_puzzle(char *puzzle, char *line1);
int		proc_line1(int ch[5], char *puzzle);
int		is_valid(char *puzzle, int ch[5]);
void	solve_it(char *puzzle, int ch[5]);
int		is_ch(char c, int ch[5]);
int		is_num(char c);

#endif
