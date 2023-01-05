# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 14:51:29 by toaktas           #+#    #+#              #
#    Updated: 2022/12/02 16:36:49 by toaktas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

SRC	= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")

BSRC	= $(wildcard Src/ft_lst*.c)

OBJ	= $(SRC:%.c=%.o)

B_OBJ	= $(BSRC:%.c=%.o)

all: $(NAME)

bonus: $(B_OBJ)
	ar -rcs $(NAME) $(OBJ)

$(NAME):	$(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -rf $(B_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
