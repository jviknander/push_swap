# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 13:22:51 by jde-melo          #+#    #+#              #
#    Updated: 2022/06/22 01:35:13 by jde-melo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= /bin/rm -f

NAME	= push_swap

INCLUDE	= ./includes/push_swap.h ./libft/libft.h
SRCS	= push_swap.c main.c error_404.c list_1.c list_2.c \
		  order.c r_rr.c p_s.c

all:		$(NAME)

OBJS	= ${SRCS:.c=.o}

$(NAME):	$(OBJS) $(INCLUDE)
			$(NAME) $(OBJS)
			$(NAME)


clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus rebonus
