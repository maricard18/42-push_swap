# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maricard <maricard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 10:28:04 by maricard          #+#    #+#              #
#    Updated: 2023/04/13 14:17:53 by maricard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -g -Wall -Werror -Wextra
RM = rm -rf

LIBFT = ./libft/libft.a
NAME = push_swap
INCLUDES = includes

SRC =	./src/operations/push.c \
		./src/operations/reverse.c \
		./src/operations/rotate.c \
		./src/operations/swap.c \
		./src/algorithm/two.c \
		./src/algorithm/three.c \
		./src/algorithm/five.c \
		./src/stack/check_arguments.c \
		./src/stack/find_extremes.c \
		./src/utils/ft_error.c \
		./src/utils/init_structs.c \
		./src/utils/tests.c

SRC-OBJ = $(SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): $(SRC-OBJ) $(LIBFT)
	$(CC) $(CFLAGS) main.c $(SRC-OBJ) $(LIBFT) -o $(NAME) -I $(INCLUDES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(SRC-OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

leaks:
#	valgrind --leak-check=full ./$(NAME) $(ARGS)

re: fclean all