# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 13:54:50 by groy              #+#    #+#              #
#    Updated: 2019/12/04 14:00:34 by groy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_address.c \
	   ft_putchar.c \
	   ft_putnbr.c \
	   ft_putstr.c \
	   put_nbr_i.c 

OBJS = ${SRCS:.c=.o}

HEADERS = libft_printf.c
CC = gcc -I includes
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : ${NAME}

${NAME} :		${OBJS}
				ar rcs ${NAME} ${OBJS}
clean :
		${RM} ${OBJS}

fclean : 	clean
		${RM} ${NAME}

re : 	fclean all

.PHONY :	all clean re fclean
