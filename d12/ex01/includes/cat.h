/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:25:38 by tjose             #+#    #+#             */
/*   Updated: 2016/11/10 19:30:45 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

void	ft_putchar(char c, int o);
void	ft_putstr(char *str, int o);
void	print_err(char *name);
#endif
