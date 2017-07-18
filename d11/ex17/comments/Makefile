# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 22:22:47 by tjose             #+#    #+#              #
#    Updated: 2016/11/09 22:27:36 by tjose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = a.out
SRCFILES = ft_create_elem.c \
		   ft_list_push_front.c \
		   ft_list_sort.c \
		   ft_sorted_list_merge.c \
		   main.c
SRCDIR = srcs/
SRCS = $(addprefix $(SRCDIR), $(SRCFILES))
HEADER = includes
CFLAGS = -Wall -Werror -Wextra -I$(HEADER)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS)

clean:
	@/bin/rm -f $(NAME)

re: clean all
