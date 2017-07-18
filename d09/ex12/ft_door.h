/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:01:15 by tjose             #+#    #+#             */
/*   Updated: 2016/11/04 17:26:36 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>
# define EXIT_SUCCESS 0
# define OPEN 1
# define CLOSE 0
# 

ft_bool	is_door_close(t_door *door);
ft_bool	is_door_open(t_door *door);
ft_bool	close_door(t_door *door);
ft_bool	open_door(t_door *door);
typedef enum ft_bool;
{
	FALSE = 0,
	TRUE
} ft_bool;

typedef struct t_door
{
	int state;
} t_door;

#endif
