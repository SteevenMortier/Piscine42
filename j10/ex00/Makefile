# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smortier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/19 16:29:56 by smortier          #+#    #+#              #
#    Updated: 2017/08/22 19:47:09 by smortier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	   srcs/ft_strlen.c srcs/ft_swap.c

NAME = libft.a

OBJET = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCS = -I./includes

all : arrc

gc :
	gcc -c $(INCS) $(SOURCE)

arrc : gc
	ar rc $(NAME) $(OBJET)

clean :
	rm -f $(OBJET)

fclean : clean
	rm $(NAME)

re : fclean all

