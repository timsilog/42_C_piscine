/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:41:41 by tjose             #+#    #+#             */
/*   Updated: 2016/11/13 21:45:05 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_H
# define EVAL_H
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_stack
{
	struct s_stack	*next;
	int				data;
	int				is_op;
}					t_stack;
void				ft_push(t_stack **begin_list, int data, int op);
void				ft_pop(t_stack **begin_list);
void				ft_add(t_stack **begin_list, int data, int op);
void				ft_putnbr(int nb);
void				ft_putchar(char c);
int					is_num(char nb);
int					is_op(char c);
int					has_prec(char a, char on_stack);
t_stack				*infix_2_postfix(char *str);
#endif
