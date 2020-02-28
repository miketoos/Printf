/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:06:57 by groy              #+#    #+#             */
/*   Updated: 2020/02/28 13:48:38 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

void	ft_putstr(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
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
