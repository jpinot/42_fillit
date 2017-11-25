# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 22:17:20 by mzabalza          #+#    #+#              #
#    Updated: 2017/11/25 18:14:25 by mzabalza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Werror -Wextra

SRCS = srcs/ft_main.c\
	   srcs/ft_createfile.c\
	   srcs/ft_structadd.c\
	   srcs/ft_structnew.c\
	   srcs/ft_check_min_square.c\
	   srcs/ft_patern_new.c\
	   srcs/ft_big_mom.c\
	   srcs/ft_check_free.c\
	   srcs/ft_currentcord.c\
	   srcs/ft_add_piece.c\
	   srcs/ft_patern_add.c\
	   srcs/ft_patern_xcalc.c\
	   srcs/ft_checktet.c\
	   srcs/ft_checkpos.c\
	   srcs/ft_get_free_pos.c\
	   srcs/ft_checkerrors.c\

SAMPLE = samples/sample2.fillit

LIB = -lft -L.

INCLUDES = -I. -I.

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@gcc $(SRCS) $(FLAGS) $(LIB) $(INCLUDES) -o $(NAME)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean
	make
