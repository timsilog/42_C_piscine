# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 17:27:50 by tjose             #+#    #+#              #
#    Updated: 2016/11/10 19:20:31 by tjose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = ft_cat
CFLAGS = -Wall -Werror -Wextra -I$(HEADER)
HEADER = ./includes
SRC = ./srcs/main.c \
	  ./srcs/prints.c \
	  ./srcs/err.c
OBJECTS = main.o \
		  prints.o \
		  err.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
