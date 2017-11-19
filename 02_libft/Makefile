# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 01:56:29 by kemesure          #+#    #+#              #
#    Updated: 2017/11/19 02:13:20 by kemesure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = memcpy

SRC = ./srcs/ft_memcpy.c ./srcs/main_memcpy.c

HEADER = ./includes/libft.h

FLAGS = -Wall -Wextra -Werror

OPT = -o

GCH = ./includes/libft.h.gch

all: $(NAME)
$(NAME):
	gcc $(FLAGS) $(OPT) $(NAME) $(HEADER) $(SRC)

clean:
	/bin/rm -f $(GCH)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
