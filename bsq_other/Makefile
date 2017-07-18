#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yli <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/14 11:30:52 by yli               #+#    #+#              #
#    Updated: 2016/11/15 20:54:51 by tjose            ###   ########.fr        #
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

$(NAME): objects
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

objects:
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	/bin/rm -rf $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
