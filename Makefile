# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfung <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/19 17:34:46 by wfung             #+#    #+#              #
#    Updated: 2017/06/14 15:49:34 by wfung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_printf

CC		=	gcc

FLAG	=	-Wall -Wextra -Werror

SRCS	= 	main.c \
	   		
OBJ =		${SRCS:.c=.o}

INCLUDE	=	-I ./libft/ -L ./libft -lft

all: $(NAME)

$(OBJ): $(SRCS)
		@$(CC) $(FLAG) -c $*.c

$(NAME): $(OBJ)
		@make all -C libft
		@$(CC) $(FLAG) $(INCLUDE) $(OBJ) -o $(NAME)

clean:
		@make clean -C libft
		@/bin/rm -f $(OBJ)

fclean: clean
		@make fclean -C libft
		@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
