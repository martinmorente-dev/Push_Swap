# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 13:47:24 by mmorente          #+#    #+#              #
#    Updated: 2025/07/30 10:49:00 by mmorente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = cc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c ft_strlen.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_memchr.c ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_atol.c \
		ft_isspace.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

BONUS =  ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
			ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJ = $(BONUS:.c=.o)

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	$(LIB) $(NAME) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONNY: all clean fclean re bonus
