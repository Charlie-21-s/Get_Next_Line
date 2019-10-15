# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talexia <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 18:09:44 by talexia           #+#    #+#              #
#    Updated: 2019/10/15 15:30:30 by talexia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = out
SRC = main.c ../get_next_line.c
HEAD = ../get_next_line.h
FILEO = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -L../libft/ -lft -I $(HEAD)
	./out test_main/test_files/alpaca

clean:
	@rm -f $(FILEO)

fclean: clean
	@rm -f $(NAME)

re: fclean all
