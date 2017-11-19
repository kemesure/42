# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 21:37:26 by kemesure          #+#    #+#              #
#    Updated: 2017/11/19 17:19:37 by kemesure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c ft_display_file.c

HEADER = .

FLAGS = -Wall -Wextra -Werror

OPT = -o

DEL = main.o ft_display_file.o ft_display_file.h.gch

all: $(NAME)
$(NAME):
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(NAME) $(SRC)

clean:
	/bin/rm -f $(DEL)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
