# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/08 12:35:00 by thfernan          #+#    #+#              #
#    Updated: 2025/12/16 15:16:13 by thfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror -g3
CC = cc

HDRS_BONUS = ft_printf_bonus.h

SRCS =	ft_printf_bonus.c ft_putchar_bonus.c ft_putstr_bonus.c \
	ft_putnbr_bonus.c ft_init_specifier_bonus.c \
	ft_parse_specifier_bonus.c ft_parse_format_bonus.c \
	ft_parse_bonus.c ft_aux_ptr_bonus.c ft_counts_put_bonus.c \
	ft_pad_zeros_bonus.c ft_pad_zeros_x_u_bonus.c

OBJS = $(SRCS:.c=.o)

AR = ar
ARFLAGS = rcs

# Colors
RESET = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m

# This Makefile compile the bonus, for separeted objetcs, use the code in Makefile_splitbonus.txt

all: $(NAME)
	@echo "$(GREEN)Build of $(NAME) completed$(RESET)"

$(NAME): $(OBJS)
	@echo "$(BLUE)Creating $(NAME)...$(RESET)"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	@echo "$(YELLOW)Compiling $<$(RESET)"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
		@echo "$(RED)Removing object files$(RESET)"
		@rm -f $(OBJS)

fclean: clean
		@echo "$(RED)Removing library$(RESET)"
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
