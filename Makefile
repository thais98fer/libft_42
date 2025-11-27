# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/17 14:08:25 by thfernan          #+#    #+#              #
#    Updated: 2025/11/27 14:32:12 by thfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar
ARFLAGS = rcs

PRINTF_DIR = printf
GNL_DIR = gnl

#=================================================================#
#                           Libft sources                         #
#=================================================================#
SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_atol.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c \
	ft_lstmap_bonus.c \

OBJS = $(SRCS:.c=.o)

#=================================================================#
#                           GNL sources                           #
#=================================================================#
GNL_BONUS_SRCS = $(GNL_DIR)/get_next_line_bonus.c \
		 $(GNL_DIR)/get_next_line_utils_bonus.c

GNL_BONUS_OBJS = $(GNL_BONUS_SRCS:.c=.o)

#=================================================================#
#                              rules                              #
#=================================================================#

# This Makefile compile all bonuses, for separeted objetcs, use the code in Makefile_splitbonus.txt
all: $(NAME)

$(NAME): $(OBJS) $(GNL_BONUS_OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(GNL_BONUS_OBJS)
		
		echo "Compiling printf..."
		@$(MAKE) -C $(PRINTF_DIR)
	
		echo "Extracting and adding printf objects..."
		@ar -x $(PRINTF_DIR)/libftprintf.a
		@$(AR) $(ARFLAGS) $(NAME) *.o
		
%.o: %.c
		@$(CC) $(FLAGS) -c $< -o $@

clean:
		@rm -f $(OBJS) $(GNL_BONUS_OBJS)
		@rm -f *.o
		@$(MAKE) clean -C $(PRINTF_DIR)

fclean: clean
		@rm -f $(NAME)
		@$(MAKE) fclean -C $(PRINTF_DIR)

re: fclean all

.PHONY: all clean fclean re
