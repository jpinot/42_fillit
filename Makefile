# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 22:17:20 by mzabalza          #+#    #+#              #
#    Updated: 2017/11/26 03:30:23 by mzabalza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = srcs/ft_main.c\
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

OBJ		= $(patsubst srcs/%.c,./%.o,$(SRC))

INCLUDE	= includes/fillit.h \
		 		  includes/libft.h

.SILENT:

$(NAME): $(OBJ)
		 	gcc -Wall -Werror -Wextra $(OBJ) -L libft/ -lft -I./includes -o $(NAME)
		 	printf '\033[4m'
		 	printf '\033[32m[ ✔ ] %s\n\033[0m' "fillit is done !"
./%.o: srcs/%.c
		 	gcc -Wall -Wextra -Werror -I./includes -c $< -o $@
		 	printf '\033[0m[ ✔ ] %s\n\033[0m' "$<"

clean:
		 	/bin/rm -rf *.o
		 	printf '\033[31m[ ✔ ] %s\n\033[0m' "Clean"

fclean: clean
		 	/bin/rm -f $(NAME)
		 	printf '\033[31m[ ✔ ] %s\n\033[0m' "Fclean"

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all
