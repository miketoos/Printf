/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:28:39 by groy              #+#    #+#             */
/*   Updated: 2019/12/04 15:53:17 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

void	ft_sncf(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	if (c == 's')
		ft_putstr(va_arg(args, const char*));
	if (c == 'p')
		kek(va_arg(args, void *));
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int));
	if (c == 'u')
		ft_putnbr_u(va_arg(args, size_t));
	if (c == 'x')
		ft_hexa(va_arg(args, size_t));
	if (c == 'X')
		ft_hexa_upper(va_arg(args, size_t));
}

int		ft_printf(const char *format, ...)
{
	va_list	args;
	int i;

	va_start(args, format);
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (format[i] != '%')
				ft_sncf(format[i + 1], args);
			if (format[i] == '%')
				ft_putchar('%');
		}
	}
	va_end(args);
	return (0);
}
