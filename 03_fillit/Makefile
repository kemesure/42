# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 01:56:29 by kemesure          #+#    #+#              #
#    Updated: 2018/01/24 18:07:10 by kemesure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LFT_DIR = ./libft/



NAME_LFT = $(LFT_DIR)libft.a

NAME_FLT = fillit

NAME = $(NAME_LFT) $(NAME_FLT)



HEADER = $(LFT_DIR)libft.h fillit.h



SRC_LFT_FILES = \
ft_atoi.c ft_itoa.c ft_bzero.c ft_puiss.c ft_putnbr_fd.c ft_putchar_fd.c \
ft_putendl_fd.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_strncpy.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_memalloc.c ft_striteri.c ft_putstr_fd.c \
ft_strlcat.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_striter.c \
ft_strmapi.c ft_strnequ.c ft_strjoin.c ft_strtrim.c ft_putchar.c ft_putendl.c \
ft_strdup.c ft_strcpy.c ft_strcat.c ft_strncat.c ft_strsplit.c ft_lstdelone.c \
ft_strchr.c ft_strstr.c ft_strcmp.c ft_memdel.c ft_strnew.c ft_lstiter.c \
ft_strdel.c ft_strclr.c ft_strmap.c ft_strequ.c ft_strsub.c ft_putstr.c \
ft_putnbr.c ft_lstnew.c ft_lstdel.c ft_lstadd.c ft_lstmap.c ft_intlen.c

SRC_LFT = $(addprefix $(LFT_DIR), $(SRC_LFT_FILES))

SRC_FLT = \
fillit.c ft_check_valid_file.c ft_place_tetriminos.c ft_print_tetriminos.c



OBJ_LFT = $(SRC_LFT:%.c=%.o)

OBJ_FLT = $(SRC_FLT:%.c=%.o)

OBJ = $(OBJ_LFT) $(OBJ_FLT)



FLAGS = -Wall -Wextra -Werror

CC = clang

all: $(NAME)
$(NAME_LFT): $(OBJ_LFT)
	ar rc $(NAME_LFT) $(OBJ_LFT)
	ranlib $(NAME_LFT)
$(NAME_FLT): $(NAME_FLT)
	$(CC) $(FLAGS) $^ $(HEADER) -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME_LFT)

re: fclean all
