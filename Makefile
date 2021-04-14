# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lverdoes <lverdoes@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/04/07 16:00:30 by lverdoes      #+#    #+#                  #
#    Updated: 2021/04/14 17:09:08 by lverdoes      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	hotrace

CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror -O3 $(INCL)
INCL		=	-I $(INCL_DIR)
INCL_DIR	=	includes/
SRC_DIR		=	src/

SRC_FILES	=	main.c parse.c keyword_find.c keyword_new.c

SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

.PHONY: clean fclean re

clean:
	@/bin/rm -f .DS_Store

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test1: all
	@time ./hotrace < ./ressources/generated-1

test2: all
	@time ./hotrace < ./ressources/generated-2

test3: all
	@time ./hotrace < ./ressources/generated-3

test4: all
	@time ./hotrace < ./ressources/generated-4

test5: all
	@time ./hotrace < ./ressources/generated-5

test6: all
	@time ./hotrace < ./ressources/generated-6

test7: all
	@time ./hotrace < ./ressources/generated-7

test8: all
	@time ./hotrace < ./ressources/generated-8

test9: all
	@time ./hotrace < ./ressources/generated-9

test10: all
	@time ./hotrace < ./ressources/generated-10
