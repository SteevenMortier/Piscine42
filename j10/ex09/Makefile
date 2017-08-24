# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smortier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/19 23:57:46 by smortier          #+#    #+#              #
#    Updated: 2017/08/22 22:24:59 by smortier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_add.c 				\
	   srcs/ft_atoi.c				\
	   srcs/ft_div.c				\
	   srcs/ft_advanced_do_op.c		\
	   srcs/ft_mod.c				\
	   srcs/ft_mul.c				\
	   srcs/ft_putchar.c			\
	   srcs/ft_putnbr.c				\
	   srcs/ft_putstr.c				\
	   srcs/ft_strcmp.c				\
	   srcs/ft_sub.c				\
	   srcs/ft_usage.c				\

INCS = -I./incs

NAME = advanced_do-op

all : $(NAME)

$(NAME) :
	@gcc -Wall -Werror -Wextra $(INCS) $(SRCS) -o $(NAME)
	@echo "\033[32m" "<CREATED>" $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean
	@echo "\033[31m" "<REMOVED> " $(NAME)
re : fclean all
