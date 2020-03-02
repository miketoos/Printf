/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:06:57 by groy              #+#    #+#             */
/*   Updated: 2020/03/02 11:12:17 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

void	ft_putstr(const char *str)
{
	if (!str)
	{
		ft_putstr("(null)");
		return ;
	}
	while (*str)
		ft_putchar(*str++);
}

void	ft_blank(int n)
{
	while(n-->0)
		ft_putchar(' ');
}

void	ft_putchar(int c)
{
	char a;

	a = (unsigned char)c;
	write(1, &a, 1);
}

void	ft_zero(int n)
{
	while(n-->0)
		ft_putchar('0');
}

int		ft_ilen(int n)
{
	int size;

	size = 1;
	while (n >= 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}
