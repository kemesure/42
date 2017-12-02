# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 01:56:29 by kemesure          #+#    #+#              #
#    Updated: 2017/12/02 21:24:29 by kemesure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

N01 = memset
N02 = bzero
N03 = memcpy
N04 = memccpy
N05 = memmove
N06 = memchr
N07 = memcmp
N08 = strlen
N09 = strdup
N10 = strcpy
N11 = strncpy
N12 = strcat
N13 = strncat
N14 = strlcat
N15 = strchr
N16 = strrchr
N17 = strstr
N18 = strnstr
N19 = strcmp
N20 = strncmp
N21 = atoi
N22 = isalpha
N23 = isdigit
N24 = isalnum
N25 = isascii
N26 = isprint
N27 = toupper
N28 = tolower

SRC01 = ./srcs/ft_memset.c
SRC02 = ./srcs/ft_bzero.c
SRC03 = ./srcs/ft_memcpy.c
SRC04 = ./srcs/ft_memccpy.c
SRC05 = ./srcs/ft_memmove.c
SRC06 = ./srcs/ft_memchr.c
SRC07 = ./srcs/ft_memcmp.c
SRC08 = ./srcs/ft_strlen.c
SRC09 = ./srcs/ft_strdup.c
SRC10 = ./srcs/ft_strcpy.c
SRC11 = ./srcs/ft_strncpy.c
SRC12 = ./srcs/ft_strcat.c
SRC13 = ./srcs/ft_strncat.c
SRC14 = ./srcs/ft_strlcat.c
SRC15 = ./srcs/ft_strchr.c
SRC16 = ./srcs/ft_strrchr.c
SRC17 = ./srcs/ft_strstr.c
SRC18 = ./srcs/ft_strnstr.c
SRC19 = ./srcs/ft_strcmp.c
SRC20 = ./srcs/ft_strncmp.c
SRC21 = ./srcs/ft_atoi.c
SRC22 = ./srcs/ft_isalpha.c
SRC23 = ./srcs/ft_isdigit.c
SRC24 = ./srcs/ft_isalnum.c
SRC25 = ./srcs/ft_isascii.c
SRC26 = ./srcs/ft_isprint.c
SRC27 = ./srcs/ft_toupper.c
SRC28 = ./srcs/ft_tolower.c

HEADER = ./includes/

FLAGS = -Wall -Wextra -Werror

OPT = -o

GCH = ./includes/libft.h.gch

all: $(NAME)
$(NAME):
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N01) $(SRC01)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N02) $(SRC02)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N03) $(SRC03)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N04) $(SRC04)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N05) $(SRC05)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N06) $(SRC06)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N07) $(SRC07)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N08) $(SRC08)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N09) $(SRC09)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N10) $(SRC10)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N11) $(SRC11)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N12) $(SRC12)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N13) $(SRC13)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N14) $(SRC14)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N15) $(SRC15)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N16) $(SRC16)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N17) $(SRC17)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N18) $(SRC18)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N19) $(SRC19)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N20) $(SRC20)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N21) $(SRC21)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N22) $(SRC22)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N23) $(SRC23)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N24) $(SRC24)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N25) $(SRC25)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N26) $(SRC26)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N27) $(SRC27)
	gcc $(FLAGS) -I $(HEADER) $(OPT) $(N28) $(SRC28)

clean:
	/bin/rm -f $(GCH)

fclean: clean
	/bin/rm -f $(N01) $(N02) $(N03) $(N04) $(N05) $(N06) $(N07) $(N08) $(N09) \
		$(N10) $(N11) $(N12) $(N13) $(N14) $(N15) $(N16) $(N17) $(N18) $(N19) \
		$(N20) $(N21) $(N22) $(N23) $(N24) $(N25) $(N26) $(N27) $(N28)

re: fclean all
