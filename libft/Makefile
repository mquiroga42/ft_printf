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

SRC_DIR = src/

SRCS := ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
	ft_tolower.c ft_toupper.c ft_substr.c ft_striteri.c ft_uitoa.c
SRCS := $(addprefix $(SRC_DIR),$(SRCS))

SRCS_BONUS := ft_lstadd_front.c ft_lstadd_back.c \
	ft_lstclear.c ft_lstdelone.c ft_lstlast.c \
	ft_lstnew.c ft_lstsize.c ft_lstiter.c ft_lstmap.c
SRCS_BONUS := $(addprefix $(SRC_DIR),$(SRCS_BONUS))

HEADER_DIR = include/

HEADER := libft.h
HEADER := $(addprefix $(HEADER_DIR),$(HEADER))

OBJS:=$(patsubst $(SRC_DIR)%.c,$(SRC_DIR)%.o,$(SRCS))
OBJS_BONUS:=$(patsubst $(SRC_DIR)%.c,$(SRC_DIR)%.o,$(SRCS_BONUS))

#_____PROGRAM_____#

all: $(NAME)

bonus: $(NAME) $(OBJS_BONUS)
	@ar rcs $(NAME) $(OBJS)

$(NAME): $(OBJS)
	@clear
	@echo "$(GREEN)Generando librería...$(DEF_COLOR)"
	@echo "$(GREEN)Compilando $(WHITE) $(NAME) $(GREEN)\t✔️$(DEF_COLOR)"
	@ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)Librería generada$(DEF_COLOR)"

%.o: %.c
	@echo "$(YELLOW)Compilando $(WHITE) $< $(GREEN)\t✔️$(DEF_COLOR)"
	@$(CC) -c $(CFLAGS) -I $(HEADER_DIR) $< -o $@
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