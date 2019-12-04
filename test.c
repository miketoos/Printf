/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:28:39 by groy              #+#    #+#             */
/*   Updated: 2019/12/04 10:38:59 by groy             ###   ########.fr       */
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
	ft_putnbr(&i);
//	printf("%p", &i);
//	ft_printf("%d", 12);
//	char c;

//	c = (char)200;
//	printf("%x", 111);
//	write(1, &c, 1);
//	ft_printf("ou", "non", "nop");
//	printf("%c", (char)047);
//	ft_putchar((char)47);
//	printf("%c", 'é');
	return (0);
}
