# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 01:56:29 by kemesure          #+#    #+#              #
#    Updated: 2017/12/03 15:49:36 by kemesure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./includes/

SRC = ./srcs/ft_atoi.c ./srcs/ft_bzero.c ./srcs/ft_memset.c ./srcs/ft_memcpy.c \
./srcs/ft_memchr.c ./srcs/ft_memccpy.c ./srcs/ft_memmove.c ./srcs/ft_strncpy.c \
./srcs/ft_memcmp.c ./srcs/ft_strncat.c ./srcs/ft_strlcat.c ./srcs/ft_strrchr.c \
./srcs/ft_strlen.c ./srcs/ft_strnstr.c ./srcs/ft_strncmp.c ./srcs/ft_isalpha.c \
./srcs/ft_strdup.c ./srcs/ft_isdigit.c ./srcs/ft_isalnum.c ./srcs/ft_isascii.c \
./srcs/ft_strcpy.c ./srcs/ft_isprint.c ./srcs/ft_toupper.c ./srcs/ft_tolower.c \
./srcs/ft_strcat.c ./srcs/ft_strchr.c ./srcs/ft_strstr.c ./srcs/ft_strcmp.c

OBJ = ft_atoi.o ft_bzero.o ft_memset.o ft_memcpy.o ft_memchr.o ft_memcmp.o \
ft_strlen.o ft_strdup.o ft_strcpy.o ft_memccpy.o ft_memmove.o ft_strncpy.o \
ft_strcat.o ft_strchr.o ft_strstr.o ft_strncat.o ft_strlcat.o ft_strrchr.o \
ft_strcmp.o ft_strnstr.o ft_strncmp.o ft_isalpha.o ft_isdigit.o \
ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o

OBJS = $(SRC:./srcs/%.c=%.o)

FLAGS = -Wall -Wextra -Werror

GCH = ./includes/libft.h.gch

all: $(NAME)
$(NAME): $(OBJS)
	# gcc  -c $(SRC)
	ar rc $(NAME) $(OBJS)
#------------------------------------------------------#
	gcc $(FLAGS) -o lib main.c -I $(HEADER) -L . -lft
#------------------------------------------------------#
# $@ pour les .o et $< pour les .c
%.o: srcs/%.c
	gcc $(FLAGS) -o $@ -c $<

clean:
	/bin/rm -f $(GCH) $(OBJS)

fclean: clean
	/bin/rm -f $(NAME) lib

re: fclean all
