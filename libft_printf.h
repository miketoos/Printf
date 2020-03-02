/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:37:53 by groy              #+#    #+#             */
/*   Updated: 2020/03/02 10:59:54 by groy             ###   ########.fr       */
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
	size_t		width;
	int		minus;
	int		wildcard;
	int		point;
}				t_list;

t_list			ft_tzero(t_list all);
void			ft_blank(int n);
void			ft_putchar(int c);
void			ft_putstr(const char *c);
void			ft_putnbr(int n);
void			ft_zero(int n);
int				ft_atoi(const char *str);
int				ft_printf(const char *format, ...);
int				ft_isflag(int c);
int				ft_isdigit(int c);
int				ft_isconversion(int c);
int				ft_issth(int c);
int				ft_ilen(int n);
size_t			ft_strlen(const char *s);
void			ft_all(t_list all, int data);
void			kek(void *address);
void			ft_putnbr_u(size_t nb);
void			ft_putnbr_base(size_t nb, char *base);
int				func_c(int c, t_list *all);
int				func_d(int n, t_list *all);
int				func_i(int n, t_list *all);
int				func_s(char *str, t_list *all);
int				func_p(size_t nb, t_list *all);
int				func_u(size_t nb, t_list *all);
int				func_x(size_t nb, t_list *all);
int				func_xx(size_t nb, t_list *all);
char			*ft_strdup(const char *s1);
char			*ft_cut(char *str, int n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);

#endif
