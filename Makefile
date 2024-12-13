# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/03 10:12:25 by aakyuz            #+#    #+#              #
#    Updated: 2024/12/04 14:07:32 by aakyuz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_C = checker
CC = cc
C_FLAGS = -Wall -Wextra -Werror
SRCS =  push_swap.c \
		atoi.c \
		cheap.c \
		cost.c \
		initial_stack.c \
		min_max.c \
		num_convert.c \
		reverse.c \
		rotate.c \
		sort.c \
		swap_push.c

SRCS_C = checker.c \
		get_next_line.c \
		get_next_line_utils.c \
		checker_check.c \
		checker_convert.c \
		checker_rev.c \
		checker_rot.c \
		checker_sort.c \
		checker_swap.c \

OBJ =$(SRCS:.c=.o)

OBJ_C = $(SRCS_C:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	@make -C printf/
	@$(CC) $(C_FLAGS) $(OBJ) ./libft/libft.a ./printf/libftprintf.a -o $(NAME) -ds

bonus: $(OBJ_C)
	@make -C libft/
	@make -C printf/
	@$(CC) $(C_FLAGS) $(OBJ_C) ./libft/libft.a ./printf/libftprintf.a -o $(NAME_C)

%.o: %.c
	@$(CC) $(C_FLAGS) -c $< -o $@


fclean: clean
	@make fclean -C libft/
	@make fclean -C printf/
	@rm -rf $(NAME) $(NAME_C)

clean:
	@make clean -C printf/
	@make clean -C libft/
	@rm -rf $(OBJ) $(OBJ_C)

re: fclean all