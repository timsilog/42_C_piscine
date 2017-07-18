# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/13 21:45:20 by tjose             #+#    #+#              #
#    Updated: 2016/11/13 22:06:52 by tjose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = eval_expr
HEADER = ./includes
CFLAGS = -Wall -Werror -Wextra -I $(HEADER)
SRCFILES = checks.c \
		   ft_list.c \
		   ft_put.c \
		   i2post.c \
		   main.c
SRCDIR = ./srcs/
SRCS = $(addprefix $(SRCDIR), $(SRCFILES))
OBJECTS = checks.o \
		  ft_list.o \
		  ft_put.o \
		  i2post.o \
		  main.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
