/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:28:39 by groy              #+#    #+#             */
/*   Updated: 2019/12/04 14:22:00 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	args;
	int i;

	va_start(args, format);
	i = -1;
	while (format[++i])
	{
//		printf("%c", format[i]);
		if (format[i] == '%')
		{
			if (format[++i] == 'd')
			{
				ft_putnbr(va_arg(args, int));
			}
//			printf("%c", va_arg(args, char));
		}
	}
	va_end(args);
	return (0);
}

int		main(void)
{
	int i = 2;
	
	return (0);
}
