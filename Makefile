# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/15 13:51:12 by mmorente          #+#    #+#              #
#    Updated: 2025/08/15 13:51:33 by mmorente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

LIBFT_DIR	= Libft
LIBFT		= $(LIBFT_DIR)/libft.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

SRC	= $(shell find src -name "*.c")
OBJ	= $(SRC:.c=.o)

INCLUDE_DIR	= src
INCLUDES	= -I$(INCLUDE_DIR) -I$(LIBFT_DIR)

BONUS_SRC	= $(shell find src -name "*_bonus.c")
BONUS_OBJ	= $(BONUS_SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	@echo "Compilando libft..."
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJ)
	@echo "Compilando $(NAME)..."
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJ) $(LIBFT)

bonus: $(LIBFT) $(OBJ) $(BONUS_OBJ)
	@echo "Compilando bonus..."
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJ) $(BONUS_OBJ) $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "Limpiando objetos..."
	@$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	@echo "Limpiando binarios..."
	@$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
