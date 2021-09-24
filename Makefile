# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/22 10:53:25 by smetzler          #+#    #+#              #
#    Updated: 2021/09/23 17:39:39 by smetzler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror -c
SRC = ft_printf.c ft_printf_utils.c

$(NAME):
	gcc $(FLAGS) $(SRC)
	ar -crs $(NAME) ft_*.o

all: $(NAME)

clean:
	rm -f *.o *~

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	gcc -Wall -Wextra -Werror $(SRC) main.c
