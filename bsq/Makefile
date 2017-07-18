#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yli <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/14 11:30:52 by yli               #+#    #+#              #
#    Updated: 2016/11/16 21:28:58 by tjose            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bsq
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(HDRS)
HDRS = ./includes
SRCFILES = main.c \
		   ft_find_solve_print.c \
		   ft_prep.c \
		   ft_str.c \
		   checks.c
SRCDIR = ./srcs/
SRCS = $(addprefix $(SRCDIR), $(SRCFILES))
OBJECTS = $(SRCFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

main.o: ./srcs/main.c
	$(CC) $(CFLAGS) -c ./srcs/main.c

ft_find_solve_print.o: ./srcs/ft_find_solve_print.c
	$(CC) $(CFLAGS) -c ./srcs/ft_find_solve_print.c

ft_prep.o: ./srcs/ft_prep.c
	$(CC) $(CFLAGS) -c ./srcs/ft_prep.c

ft_str.o: ./srcs/ft_str.c
	$(CC) $(CFLAGS) -c ./srcs/ft_str.c

checks.o: ./srcs/checks.c
	$(CC) $(CFLAGS) -c ./srcs/checks.c

clean:
	/bin/rm -rf $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
