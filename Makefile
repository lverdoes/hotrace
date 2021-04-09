# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lverdoes <lverdoes@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/04/07 16:00:30 by lverdoes      #+#    #+#                  #
#    Updated: 2021/04/09 13:35:55 by lverdoes      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	hotrace

CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror -O3 $(INCL)
INCL		=	-I $(INCL_DIR) -I $(LIBFT_DIR)$(INCL_DIR)
INCL_DIR	=	includes/
LIBFT_DIR	=	libft/
LIBFT		=	libft.a
SRC_DIR		=	src/

SRC_FILES	=	main.c parse.c keyword_find.c keyword_new.c

SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)
	mv $(LIBFT_DIR)$(LIBFT) .

$(NAME): $(LIBFT)
	$(CC) $(FLAGS) $(SRC) -o $(NAME) $(LIBFT)

.PHONY: clean fclean re

clean:
	@/bin/rm -f .DS_Store

fclean: clean
	/bin/rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
	/bin/rm -f $(LIBFT)

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
