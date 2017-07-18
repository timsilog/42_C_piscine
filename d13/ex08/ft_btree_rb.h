/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_rb.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:10:14 by tjose             #+#    #+#             */
/*   Updated: 2016/11/11 14:36:13 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_RB_H
# define FT_BTREE_RB_H
# include <stdlib.h>

enum	e_rb_color
{
	RB_BLACK,
	RB_RED
};

typedef struct			s_rb_node
{
	struct s_rb_node	*parent;
	struct s_rb_node	*left;
	struct s_rb_node	*right;
	void				*data;
	enum e_rb_color		color;
}						t_rb_node;
void					rb_insert(struct s_rb_node **root,
		void *data, int (*cmpf)(void *, void *));
#endif
