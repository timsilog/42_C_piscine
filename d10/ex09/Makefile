# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 15:25:49 by tjose             #+#    #+#              #
#    Updated: 2016/11/08 00:37:46 by tjose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = ft_advanced_do-op
SRCFILES = ft_putchar.c \
		   ft_putnbr.c \
		   funs.c \
		   main.c \
		   ops.c
SRCDIR = ./srcs/
SRC = $(addprefix $(SRCDIR), $(SRCFILES))
HEADERS = ./includes/
CFLAGS = -Wall -Werror -Wextra


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -I $(HEADERS) -o $(NAME)


clean:
	@/bin/rm -f $(NAME)

re: clean all
