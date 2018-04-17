# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 01:56:29 by kemesure          #+#    #+#              #
#    Updated: 2018/04/12 15:13:19 by kemesure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

HEADER = get_next_line.h

SRC = get_next_line.c

OBJ = $(SRC:%.c=%.o)

CC = clang

FLAGS = -Wall -Wextra -Werror

all: libft.a $(NAME)

libft.a:
	$(MAKE) -C libft

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -g -o $@ -include $(HEADER) -L ./libft/ -lft $(OBJ)

clean:
	$(MAKE) clean -C libft
	/bin/rm -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C libft
	/bin/rm -f $(NAME)

re: fclean all
	$(MAKE) re -C libft
