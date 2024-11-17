# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 19:39:58 by asezgin           #+#    #+#              #
#    Updated: 2024/11/12 19:40:34 by asezgin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = cc

SRCS =	ft_printf.c \
		ft_hexadecimal.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_adress.c \
		ft_putnbr_unsigned.c \

OBJS = $(SRCS:.c=.o)


all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re