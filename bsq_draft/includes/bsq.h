/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:15:56 by tjose             #+#    #+#             */
/*   Updated: 2016/11/15 15:20:59 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

void				ft_list_push_back(t_list **begin_list, char data);
void				ft_list_push_front(t_list **begin_list, char data);
void				ft_list_clear(t_list **begin_list);
char				*ft_strcpy(char *dest, char *src);
void				ft_putchar(char c, int o);
void				ft_putstr(char *str, int o);
char				*ft_strcat(char *dest, char *src);

#endif
