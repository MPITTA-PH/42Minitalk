# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/26 15:28:04 by mpitta-p          #+#    #+#              #
#    Updated: 2025/03/20 15:43:07 by mpitta-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = $(wildcard *.c)
OBJS = $(FILES:.c=.o)
CC = @cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = libft.h
LIBC = ar -rcs
NAME = libft.a

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
