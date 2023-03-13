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
CFLAGS = -Wall -Werror -Wextra -g3

#_____CONF_____#

MAKEFLAGS += --no-print-directory

#_____COLORS_____#

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#_____OBJS_____#
SRC_DIR = ft_printf/src/
SRCS := ft_printf.c\
		ft_printf_utils.c\
		ft_printf_utils_hex.c
SRCS := $(addprefix $(SRC_DIR),$(SRCS))

HEADER_DIR = ft_printf/include/
HEADER := ft_printf.h
HEADER := $(addprefix $(HEADER_DIR),$(HEADER))

OBJS:=$(patsubst $(SRC_DIR)%.c,$(SRC_DIR)%.o,$(SRCS))

#_____PROGRAM_____#
all: $(NAME)
	@$(CC) no_main.c $(NAME) -o exec

$(NAME): $(OBJS)
	@make -C libft
	@mv libft/libft.a $(NAME)
	@echo "$(GREEN)Generando librería...$(DEF_COLOR)"
	@echo "$(YELLOW)Compilando $(WHITE) $(NAME) $(GREEN)\t✔️$(DEF_COLOR)"
	@ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)Librería generada$(DEF_COLOR)"

%.o: %.c
	@echo "$(GREEN)Compilando $(WHITE) $< $(GREEN)\t✔️$(DEF_COLOR)"
	@$(CC) -c $(CFLAGS) -I $(HEADER_DIR) $< -o $@

clean:
	@$(RM) $(OBJS) exec
	@make -C libft clean

fclean: clean
	@$(RM) $(NAME)
	@make -C libft fclean

re: fclean all

.PHONY: all re clean fclean