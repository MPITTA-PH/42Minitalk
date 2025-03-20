# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 11:58:22 by mpitta-p          #+#    #+#              #
#    Updated: 2025/03/20 15:36:58 by mpitta-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = $(wildcard *.c)
OBJS = $(FILES:.c=.o)
CC = @cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = ft_printf.h
LIBC = ar -rcs
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	@$(LIBC) $(NAME) $(OBJS)
%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
