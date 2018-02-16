# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsissoko <bsissoko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 10:06:09 by bsissoko          #+#    #+#              #
#    Updated: 2018/01/23 11:55:29 by bsissoko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = generate_grids

FLAGS = -Wall -Wextra -Werror

SRC =	./f_random.c generate_grids.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -L../libft -lft

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
