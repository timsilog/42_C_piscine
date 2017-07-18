/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i2post.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:40:44 by tjose             #+#    #+#             */
/*   Updated: 2016/11/13 22:14:56 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

void	handle_op(t_stack **stack, char *str, int i, t_stack **post)
{
	if (*stack)
	{
		if (has_prec(str[i], (*stack)->data))
		{
			while (*stack)
			{
				if (has_prec(str[i], (*stack)->data))
				{
					ft_add(post, (*stack)->data, 1);
					ft_pop(stack);
				}
				else
					break ;
			}
			ft_push(stack, str[i], 1);
		}
		else
			ft_push(stack, str[i], 1);
	}
	else
		ft_push(stack, str[i], 1);
}

int		get_num(char *str, int *i)
{
	int		temp;

	temp = 0;
	while (is_num(str[*i]))
	{
		temp *= 10;
		temp += str[*i] - '0';
		(*i)++;
	}
	(*i)--;
	return (temp);
}

void	i2p_loop(t_stack **stack, char *str, int *i, t_stack **post)
{
	if (str[*i] == ')')
	{
		while ((*stack)->data != '(')
		{
			ft_add(post, (*stack)->data, 1);
			ft_pop(stack);
		}
		ft_pop(stack);
	}
	if (str[*i] == '-')
	{
		if (is_num(str[*i + 1]))
		{
			(*i)++;
			ft_add(post, -1 * get_num(str, i), 0);
		}
	}
	else if (is_num(str[*i]))
		ft_add(post, get_num(str, i), 0);
	if (is_op(str[*i]))
		handle_op(stack, str, *i, post);
}

t_stack	*infix_2_postfix(char *str)
{
	t_stack	*post;
	int		i;
	t_stack	*stack;

	i = -1;
	stack = 0;
	post = 0;
	while (str[++i])
	{
		i2p_loop(&stack, str, &i, &post);
	}
	while (stack)
	{
		ft_add(&post, stack->data, 1);
		i++;
		ft_pop(&stack);
	}
	return (post);
}
