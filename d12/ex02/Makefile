# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 22:00:36 by tjose             #+#    #+#              #
#    Updated: 2016/11/10 19:48:20 by tjose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = ft_tail
SRCFILES = ft_atoi.c \
		   funs.c \
		   main.c \
		   err.c
SRCDIR = ./srcs/
SRCS = $(addprefix $(SRCDIR), $(SRCFILES))
OBJECTS = ft_atoi.o \
		  funs.o \
		  main.o \
		  err.o
CFLAGS = -Wall -Werror -Wextra -I$(HEADER)
HEADER = ./includes

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
