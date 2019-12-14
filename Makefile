# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groy <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 13:54:50 by groy              #+#    #+#              #
#    Updated: 2019/12/14 15:53:47 by groy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = func_p.c \
	   func_c.c \
	   func_d_i.c \
	   func_s.c \
	   func_u.c \
	   ft_strlen.c \
	   func_x.c \
	   func_xx.c \
	   ft_printf.c \
	   ft_isflag.c \
	   ft_putchar.c \
	   ft_atoi.c

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
