# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 14:54:36 by tjose             #+#    #+#              #
#    Updated: 2016/11/07 18:34:09 by tjose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
SRCFILES = ft_putchar.c \
		   ft_putstr.c \
		   ft_strcmp.c \
		   ft_swap.c \
		   ft_strlen.c
SRCDIR = ./srcs/
SRC = $(addprefix $(SRCDIR), $(SRCFILES))
OBJECTS = ft_putchar.o \
		  ft_putstr.o \
		  ft_strcmp.o \
		  ft_swap.o \
		  ft_strlen.o
HEADERS = ./includes
CFLAGS=-Wall -Werror -Wextra -I$(HEADERS)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJECTS)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
