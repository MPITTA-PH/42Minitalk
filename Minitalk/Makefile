# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpitta-p <mpitta-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 14:55:46 by miguelhenri       #+#    #+#              #
#    Updated: 2025/03/05 11:38:45 by mpitta-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += -s
CC = @cc -g
NAMEC = client
NAMES = server
LIBS_DIR = libft
LIBFT = $(LIBS_DIR)/ft_lib/libft.a
PRINTF = $(LIBS_DIR)/ft_printf/libftprintf.a
GNL = $(LIBS_DIR)/get_next_line/get_next_line.a
LIBFT_MAKE = $(MAKE) -C $(LIBS_DIR)
FLAGS = -Wall -Werror -Wextra
SRCS = client.c
SRSS = server.c
OBJC = ${SRCS:.c=.o}
OBJS = ${SRSS:.c=.o}
RM = rm -rf

RED             := \033[1;31m
GREEN           := \033[1;32m
YELLOW          := \033[1;33m
BLUE            := \033[1;34m
CYAN            := \033[1;36m
RESET           := \033[0m
BOLD_GREEN      := \033[1;32m
BOLD_YELLOW     := \033[1;33m
BOLD_BLUE       := \033[1;34m

all: ${NAMEC} ${NAMES}

${LIBFT}:
	@echo "$(BLUE)📚 Checking libft...$(RESET)"
	@[ -f ${LIBFT} ] || $(LIBFT_MAKE) --no-print-directory
	@echo "${GREEN}🛠️  LIBFT OK ⚙️"

${PRINTF}:
	@exho "$(BLUE) Checking ft_printf...$(RESET)"
	@[ -f ${PRINTF} ] || $(PRINTF_MAKE) --no-print-directory
	@echo "${GREEN}🛠️  FT_PRINTF OK ⚙️"
	
${NAMEC}: ${OBJC} ${LIBFT} ${PRINTF}
	@${CC} ${FLAGS} ${OBJC} ${PRINTF} ${LIBFT} -o ${NAMEC}
	@echo "${GREEN}🛠️  CLEINT SUCCESSFULLY COMPILED! ⚙️"

${NAMES}: ${OBJS} ${LIBFT} ${PRINTF}
	@${CC} ${FLAGS} ${OBJS} ${PRINTF} ${LIBFT} -o ${NAMES}
	@echo "${GREEN}🛠️  SERVER SUCCESSFULLY COMPILED! ⚙️"

%.o: %.c
	@echo "$(YELLOW)🛠️  Compiling $<...$(RESET)"
	@${CC} ${FLAGS} -c $< -o $@

clean:
	@$(RM) ${OBJC} ${OBJS}
	@$(LIBFT_MAKE) clean --no-print-directory
	@echo "$(RED)✅ Object files cleaned 🧹$(RESET)"

fclean: clean
	@echo "$(BLUE)🗑️ Removing ${NAMEC} & ${NAMES}...$(RESET)"
	@$(RM) ${NAMEC} ${NAMES}
	@$(LIBFT_MAKE) fclean --no-print-directory
	@echo "$(RED)✅ Full clean completed 🧹🗑️$(RESET)"

re: fclean all

.PHONY: all clean fclean re
