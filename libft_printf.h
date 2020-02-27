/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:37:53 by groy              #+#    #+#             */
/*   Updated: 2020/02/27 09:40:16 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

typedef	struct	s_list
{
	char	conversion;
	int		zero;
	int		width;
	int		minus;
	int		wildcard;
	int		point;
}				t_list;

int				ft_atoi(const char *str, int len);
int				ft_printf(const char *format, ...);
int				ft_isflag(int c);
int				ft_isdigit(int c);
int				ft_isconversion(int c);
int				ft_issth(int c);
size_t			ft_strlen(const char *s);
void			ft_sncf(char c, va_list args);
void			kek(void *address);
void			ft_putnbr_u(size_t nb);
void			ft_putnbr_base(size_t nb, char *base);
void			ft_hexa_upper(size_t nb);
void			ft_hexa(size_t nb);
void			func_c(t_list all, int c);
void			ft_putchar(int c);
void			ft_putstr(const char *str);
void			ft_putnbr(int n);

#endif
