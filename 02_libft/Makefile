# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 01:56:29 by kemesure          #+#    #+#              #
#    Updated: 2017/11/19 14:28:14 by kemesure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = memcpy

SRC = ./srcs/ft_memcpy.c ./srcs/main.c

HEADER = ./includes/

FLAGS = -Wall -Wextra -Werror

OPT = -o

GCH = ./includes/libft.h.gch

all: $(NAME)
$(NAME):
	gcc $(FLAGS) $(SRC) $(OPT) $(NAME) -I $(HEADER)

clean:
	/bin/rm -f $(GCH)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
