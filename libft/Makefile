# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 22:17:20 by mzabalza          #+#    #+#              #
#    Updated: 2017/11/20 22:21:39 by mzabalza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit.a

FLAGS = -Wall -Werror -Wextra

SRC = fillit.c /
	
SAMPLES = 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -I. $(FLAGS) -c $(SRC) 
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean
	make

.PHONY	all clean fclean re
