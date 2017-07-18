/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:09:45 by tjose             #+#    #+#             */
/*   Updated: 2016/11/09 22:19:52 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
void				ft_sorted_list_merge(t_list **begin_list,
		t_list *begin_lsit2, int (*cmp)());
t_list				*ft_create_elem(void *data);
void				ft_list_push_front(t_list **begin_list, void *data);
void				ft_list_sort(t_list **begin_list, int (*cmp)());
#endif
