/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:28:39 by groy              #+#    #+#             */
/*   Updated: 2020/02/28 15:15:43 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

t_list	ft_tzero(t_list all)
{
	all.conversion = '\0';
	all.zero = 0;
	all.width = 0;
	all.minus = 0;
	all.wildcard = 0;
	all.point = 0;
	return (all);
}

/*
fonction qui met toutes les valeurs d'une structure a zero
*/

t_list	ft_flag(const char *str, t_list all)
{
	int 	i;
	int		j;

	j = 0;
	i = 0;
	while (ft_isconversion(str[i++]) == 0)
	{
		if (ft_isconversion(str[i]) == 1 && !(all.conversion))
			all.conversion = str[i];
		if (str[i] == '0')
			all.zero = 1;
		if (str[i] == '-')
			all.minus = 1;
		if (str[i] == '*')
			all.wildcard = 1;
		if (str[i] == '.')
		{
			all.point = ft_atoi(&str[++i]);
			i += ft_ilen(all.point) - 1;
		}
		if (ft_isdigit(str[i]) && all.width == 0)
		{
			all.width = ft_atoi(&str[i]);
			i += ft_ilen(all.width) - 1;
		}
	}
	return (all);
}

/*
remplit toutes les data de la structure
*/

int		ft_format(const char *format, t_list *all)
{
	int i;
	int ret;

	*all = ft_tzero(*all);
	i = 0;
	ret = 0;
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			ft_putchar(format[i++]);
			ret++;
		}
		if (format[i] == '%' && format [i + 1] == '%')
		{
			ft_putchar('%');
			ret += 2;
			i += 2;
		}
		if (format[i] == '%' && format[i])
		{
			*all = ft_flag(&format[i], *all);
			while (ft_isflag(format[i]) && !(ft_isconversion(format[i])))
			{
		//		printf("%d", i);
				i++;
			}
			if (ft_isconversion(format[i]))
			{
				i++;
				break ;
			}
		}
	}
	return (i);
}

int		ft_printf(const char *format, ...)
{
	size_t				current;
	int 			ret;
	va_list			args;
	t_list			*all;

	current = 0;
	ret = 0;
	all = malloc(sizeof(t_list));
	*all = ft_tzero(*all);
	va_start(args, format);
	while (current != ft_strlen(format))
	{
		current += ft_format(&format[current], all);
		if (all->wildcard == 1)
			all->width = va_arg(args, int);
	//printf("conversion :%c\nzero :%d\nwidth :%d\nminus :%d\nwildcard :%d\npoint :%d", all->conversion , all->zero,all->width, all->minus, all->wildcard, all->point);
		ret += all->conversion == 'c' ? func_c(va_arg(args, int), all) : 0;
		ret += all->conversion == 's' ? func_s(va_arg(args, char *), all) : 0;
		ret += all->conversion == 'd' ? func_d(va_arg(args, int), all) : 0;
		ret += all->conversion == 'i' ? func_i(va_arg(args, int), all) : 0;
		ret += all->conversion == 'p' ? func_p(va_arg(args, size_t), all) : 0;
		ret += all->conversion == 'u' ? func_u(va_arg(args, size_t), all) : 0;
		ret += all->conversion == 'x' ? func_x(va_arg(args, size_t), all) : 0;
		ret += all->conversion == 'X' ? func_xx(va_arg(args , size_t), all) : 0;
//		getchar();
	}
//	printf("%s", va_arg(args, const char*));
	va_end(args);
	return (ret);
}
