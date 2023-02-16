# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 12:33:56 by cyberoot          #+#    #+#              #
#    Updated: 2023/01/23 08:54:08 by cyberoot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#_____VARIABLES_____#

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

#_____OBJS_____#

SRCS:=$(wildcard ft_printf/src/*.c)
HEADERS:=$(wildcard ft_printf/include/*.h)
OBJS:=$(patsubst ft_printf/src/%.c,ft_printf/src/%.o,$(SRCS))

#_____PROGRAM_____#

all: $(NAME)

$(NAME): $(OBJS)
	@make -C libft
	@mv libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) -c $(CFLAGS) -o $@ $^

clean:
	@rm -rf $(OBJS)
	@make -C libft clean

fclean: clean
	@rm -rf $(NAME)
	@make -C libft fclean

re: fclean all

sanitize: CFLAGS += -fsanitize=address -g3
sanitize: all

.PHONY: all clean