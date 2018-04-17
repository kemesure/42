# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 01:56:29 by kemesure          #+#    #+#              #
#    Updated: 2018/04/12 15:13:16 by kemesure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./includes/

SRC_FILE = ft_atoi.c ft_itoa.c ft_bzero.c ft_puiss.c ft_memccpy.c ft_memmove.c \
ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_putstr_fd.c ft_putchar_fd.c \
ft_strlen.c ft_strdup.c ft_strcpy.c ft_strcat.c ft_putnbr_fd.c ft_putendl_fd.c \
ft_strchr.c ft_strstr.c ft_strcmp.c ft_memalloc.c ft_striteri.c ft_lstdelone.c \
ft_strncpy.c ft_strncat.c ft_strlcat.c ft_strrchr.c ft_strnstr.c ft_strsplit.c \
ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_toupper.c ft_tolower.c ft_striter.c ft_strmapi.c ft_strnequ.c ft_strjoin.c \
ft_memdel.c ft_strnew.c ft_strtrim.c ft_putchar.c ft_putendl.c ft_lstiter.c \
ft_strdel.c ft_strclr.c ft_strmap.c ft_strequ.c ft_strsub.c ft_putstr.c \
ft_putnbr.c ft_lstnew.c ft_lstdel.c ft_lstadd.c ft_lstmap.c ft_intlen.c

SRC = $(addprefix ./srcs/, $(SRC_FILE))

OBJ = $(SRC:%.c=%.o)

CC = clang

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -g -o $@ -I includes -c $< 

clean:
	/bin/rm -f $(GCH) $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
