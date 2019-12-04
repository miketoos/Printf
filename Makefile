# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 13:54:50 by groy              #+#    #+#              #
#    Updated: 2019/12/04 15:18:02 by groy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_address.c \
	   ft_putchar.c \
	   ft_putnbr.c \
	   ft_putstr.c \
	   ft_put_nbr_u.c \
	   ft_strlen.c \
	   ft_hexa.c \
	   ft_hexa_upper.c \
	   ft_printf.c

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
