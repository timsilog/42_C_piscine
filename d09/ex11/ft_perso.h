/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:40:42 by tjose             #+#    #+#             */
/*   Updated: 2016/11/04 15:58:39 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS 1
# include <string.h>

typedef struct
{
	int		life;
	char	*name;
	int		age;
	int		profession;
}			t_perso;
#endif
