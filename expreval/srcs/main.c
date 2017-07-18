/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:53:57 by tjose             #+#    #+#             */
/*   Updated: 2016/11/13 21:43:16 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

int		evaluate(int n1, int n2, char op)
{
	if (op == '+')
		return (n1 + n2);
	if (op == '-')
		return (n1 - n2);
	if (op == '*')
		return (n1 * n2);
	if (op == '/')
		return (n1 / n2);
	if (op == '%')
		return (n1 % n2);
	return (0);
}

int		solve_it(t_stack *post)
{
	t_stack	*stack;
	int		temp;
	int		a;
	int		b;

	stack = 0;
	while (post)
	{
		if (!post->is_op)
		{
			ft_push(&stack, post->data, 0);
			post = post->next;
		}
		else
		{
			b = stack->data;
			ft_pop(&stack);
			a = stack->data;
			ft_pop(&stack);
			temp = evaluate(a, b, post->data);
			ft_push(&stack, temp, 0);
			post = post->next;
		}
	}
	return (stack->data);
}

int		eval_expr(char *str)
{
	t_stack	*post;
	t_stack *temp;
	int		ans;

	ans = 0;
	post = infix_2_postfix(str);
	temp = post;
	ans = solve_it(temp);
	free(post);
	return (ans);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
