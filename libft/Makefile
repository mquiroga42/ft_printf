# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 12:34:02 by cyberoot          #+#    #+#              #
#    Updated: 2022/11/12 12:12:07 by cyberoot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#_____VARIABLES_____#

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

#_____OBJS_____#

SRCS:=$(wildcard src/*.c)
HEADERS:=$(wildcard src/*.h)
OBJS:=$(patsubst src/%.c,src/%.o,$(SRCS))

#_____PROGRAM_____#

all: $(NAME)

bonus: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) -c $(CFLAGS) -o $@ $^

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

debug: CFLAGS += -g3
debug: all bonus

sanitize: CFLAGS += -fsanitize=address -g3
sanitize: all bonus

.PHONY: all clean