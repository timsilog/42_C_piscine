/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:07:46 by tjose             #+#    #+#             */
/*   Updated: 2016/11/13 01:11:09 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2_H
# define RUSH2_H
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list				*ft_create_elem(char data);
void				ft_list_clear(t_list **begin_list);
void				ft_list_push_back(t_list **begin_list, char data);
void				fill_array(int x, char str[], char c[], int *i);
void				init_c(char left, char mid, char right, char str[]);
void				rush00(int x, int y, char str[]);
void				rush01(int x, int y, char str[]);
void				rush02(int x, int y, char str[]);
void				rush03(int x, int y, char str[]);
void				rush04(int x, int y, char str[]);
int					check_rush(t_list *list, int width, int height, int num);
void				print_rush(int width, int height, int multi_flag, int num);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
#endif
