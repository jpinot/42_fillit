# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 22:17:20 by mzabalza          #+#    #+#              #
#    Updated: 2017/11/27 20:24:36 by mzabalza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = fillits/srcs/ft_main.c\
	   fillits/srcs/ft_createfile.c\
	   fillits/srcs/ft_structadd.c\
	   fillits/srcs/ft_structnew.c\
	   fillits/srcs/ft_check_min_square.c\
	   fillits/srcs/ft_patern_new.c\
	   fillits/srcs/ft_big_mom.c\
	   fillits/srcs/ft_check_free.c\
	   fillits/srcs/ft_currentcord.c\
	   fillits/srcs/ft_add_piece.c\
	   fillits/srcs/ft_patern_add.c\
	   fillits/srcs/ft_patern_xcalc.c\
	   fillits/srcs/ft_checktet.c\
	   fillits/srcs/ft_checkpos.c\
	   fillits/srcs/ft_get_free_pos.c\
	   fillits/srcs/ft_checkerrors.c\

OBJ		= $(patsubst srcs/%.c,./%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
			@$(MAKE) -C libft
		 	@gcc -Wall -Werror -Wextra $(OBJ) -L libft/ -lft -I./fillits/includes -o $(NAME)
		 	@printf '\033[4m'
		 	@printf '\033[32m[ ✔ ] %s\n\033[0m' "fillit is done !"
./%.o: fillits/srcs/%.c
		 	@gcc -Wall -Wextra -Werror -I./fillits/includes -c $< -o $@
		 	@printf '\033[0m[ ✔ ] %s\n\033[0m' "$<"

clean:
			@$(MAKE) -C libft clean
		 	@/bin/rm -rf *.o
		 	@printf '\033[31m[ ✔ ] %s\n\033[0m' "Clean"

fclean: clean
			@$(MAKE) -C libft fclean
		 	@/bin/rm -f $(NAME)
		 	@printf '\033[31m[ ✔ ] %s\n\033[0m' "Fclean"

re: fclean
	make



.PHONY: clean fclean re all
