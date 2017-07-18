/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:48:49 by tjose             #+#    #+#             */
/*   Updated: 2016/11/03 12:49:37 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define EVEN(nbr) is_even(nbr)
# include <unistd.h>

typedef enum
{
	FALSE = 0,
	TRUE
}	t_bool;

t_bool	is_even(int nbr)
{
	if (nbr % 2 == 0)
		return (TRUE);
	return (FALSE);
}
#endif
