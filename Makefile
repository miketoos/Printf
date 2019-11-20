# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/18 12:07:47 by groy              #+#    #+#              #
#    Updated: 2019/11/18 12:13:04 by groy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

OBJS = ${SRCS:.c=.o}
CC = gcc -I includes
CFLAGS = -Wall -Wextra -Werror
RM = rm -f




clean:
		${RM} ${OBJS}

fclean:		clean
		${RM}	${NAME}

re:		fclean all

.PHONY:		all clean re fclean
