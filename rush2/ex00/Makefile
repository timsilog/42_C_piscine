# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 22:46:47 by tjose             #+#    #+#              #
#    Updated: 2016/11/13 02:12:55 by tjose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = rush-2
RUSH0 = rush-00
RUSH1 = rush-01
RUSH2 = rush-02
RUSH3 = rush-03
RUSH4 = rush-04
HEADER = ./includes
SRCFILES = checks.c \
		   ft_list.c \
		   main.c \
		   rush_util.c \
		   rushes.c \
		   ft_put.c
SRCDIR = ./srcs/
SRCS = $(addprefix $(SRCDIR), $(SRCFILES))
RUSHFILES = rush00.c \
			rush01.c \
			rush02.c \
			rush03.c \
			rush04.c \
			r_main.c \
			extra_funs.c
RUSHDIR = ./rushes/
RUSHES = $(addprefix $(RUSHDIR), $(RUSHFILES))
OBJECTS = checks.o \
		  ft_list.o \
		  main.o \
		  rush_util.o \
		  rushes.o \
		  ft_put.o
ORUSH = rush00.o \
		rush01.o \
		rush02.o \
		rush03.o \
		rush04.o \
		ft_put.o \
		r_main.o \
		extra_funs.o
CFLAGS = -Wall -Werror -Wextra -I $(HEADER)
TFLAGS = -Wall -Werror -Wextra -I $(TEST)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	$(CC) $(CFLAGS) -c $(RUSHES)
	$(CC) $(CFLAGS) $(ORUSH) -o $(RUSH0)
	$(CC) $(CFLAGS) $(ORUSH) -o $(RUSH1)
	$(CC) $(CFLAGS) $(ORUSH) -o $(RUSH2)
	$(CC) $(CFLAGS) $(ORUSH) -o $(RUSH3)
	$(CC) $(CFLAGS) $(ORUSH) -o $(RUSH4)

clean:
	@/bin/rm -f $(OBJECTS) $(ORUSH)

fclean: clean
	@/bin/rm -f $(NAME) $(RUSH0) $(RUSH1) $(RUSH2) $(RUSH3) $(RUSH4)

re: fclean all
