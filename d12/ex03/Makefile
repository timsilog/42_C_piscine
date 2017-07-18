# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 17:25:24 by tjose             #+#    #+#              #
#    Updated: 2016/11/10 20:13:40 by tjose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = ft_hexdump
SRCFILES = ft_strcmp.c \
		   ft_strlen.c \
		   funs.c \
		   main.c \
		   prints.c \
		   err.c
SRCDIR = ./srcs/
SRCS = $(addprefix $(SRCDIR), $(SRCFILES))
OBJECTS = ft_strcmp.o \
		   ft_strlen.o \
		   funs.o \
		   main.o \
		   prints.o \
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
