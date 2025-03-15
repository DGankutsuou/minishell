# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/08 01:25:17 by ostouayr          #+#    #+#              #
#    Updated: 2025/03/13 22:52:55 by ostouayr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = src
OBJ_DIR = obj
FILES = main.c builtins1.c libft/libft.a utils.c

SOURCES = $(FILES:%=$(SRC_DIR)/%)
OBJECTS = $(FILES:%.c=$(OBJ_DIR)/%.o)

NAME = minishell
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
READLINE = -lreadline

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS)  libft/ft_free_matrix.c $(OBJECTS) $(READLINE) -o $(NAME)

libft/libft.a:
	make -C libft
	make bonus -C libft

clean:
	$(RM) $(OBJ_DIR)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all

easy: re
	$(RM) $(OBJ_DIR)
	make clean -C libft
	clear

.PHONY: all clean fclean re easy
