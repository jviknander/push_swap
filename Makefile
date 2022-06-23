# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 13:22:51 by jde-melo          #+#    #+#              #
#    Updated: 2022/06/23 00:59:46 by jde-melo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= /bin/rm -f

NAME	= push_swap

INCLUDE	= ./includes/push_swap.h ./libft/libft.h

SRCS	= srcs/push_swap.c \
		  srcs/main.c \
		  srcs/error_404.c \
		  srcs/list_1.c \
		  srcs/list_2.c \
		  srcs/order.c \
		  srcs/operations.c \
		  srcs/print_moves.c

all:		$(NAME)

OBJS	= ${SRCS:.c=.o}

$(NAME):	$(OBJS) $(INCLUDE)
			make -C libft
			$(CC) $(CFALGS) $(OBJS)	./libft/libft.a -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
