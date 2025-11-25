# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/08 12:35:00 by thfernan          #+#    #+#              #
#    Updated: 2025/08/29 16:33:37 by thfernan         ###   ########.fr        #
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

# This Makefile compile the bonus, for separeted objetcs, use the code in Makefile_splitbonus.txt

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
