/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:28:39 by groy              #+#    #+#             */
/*   Updated: 2020/02/27 11:24:05 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

t_list	ft_tzero(t_list all)
{
	all.conversion = 0;
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
	int		tmp;

	j = 0;
	i = 0;
	tmp = 0;
	while (ft_isconversion(str[i++]) == 0)
	{
		if (ft_isconversion(str[i]) == 1)
			all.conversion = str[i];
		if (str[i] == '0')
			all.zero = 1;
		if (ft_isdigit(str[i]))
		{
			tmp = i;
			while (ft_isdigit(str[i++]))
				j++;
			all.width = ft_atoi(&str[tmp], j);
		}
		if (str[i] == '-')
			all.minus = 1;
		if (str[i] == '*')
			all.wildcard = 1;
		if (str[i] == '.')
			all.point = 1;
//		all.conversion = ft_isconversion(str[i]) == 1 ? str[i] : 0;
//		all.zero = str[i] == 0 ? 1 : ;
///		all.width = ft_isdigit(str[i]) == 1 ? str[i] : ;
//		all.minus = str[i] == '-' ? 1 : ;
//		all.wildcard = str[i] == '*' ? 1 : ;
//		all.point = str[i] == '.' ? 1 : ;
	}
	return (all);
}

/*
remplit toutes les data de la structure
*/


int		ft_printf(const char *format, ...)
{
	va_list			args;
	int				i;
	t_list			*all;

	all = malloc(sizeof(t_list));
	*all = ft_tzero(*all);
	va_start(args, format);
	i = -1;
	while (format[++i])
	{
		while (format[i] != '%' && format[i])
		{
	//		ft_putchar(format[i++]);
			i++;
		}
		if (format[i] == '%' && format[i])
		{
			*all = ft_flag(&format[i], *all);
			while (ft_isflag(format[i]) || ft_isconversion(format[i]))
				i++;
		}
	}
//	printf("%s", va_arg(args, const char*));
//	printf("conversion :%c\nzero :%d\nwidth :%d\nminus :%d\nwildcard :%d\npoint :%d", all->conversion , all->zero,all->width, all->minus, all->wildcard, all->point);
	return (0);
	va_end(args);
}
