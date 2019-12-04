/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kek.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 10:46:24 by groy              #+#    #+#             */
/*   Updated: 2019/12/04 13:49:48 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft_printf.h"

unsigned int		ft_strlen(char *base)
{
	unsigned int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void				ft_putnbr_base(size_t nb, char *base)
{
	if (nb < ft_strlen(base))
		ft_putchar(base[nb % ft_strlen(base)]);
	else if (nb > ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base(nb % ft_strlen(base), base);
	}
}

void		kek(void *address)
{
	ft_putstr("0x");
	ft_putnbr_base((size_t)address, "0123456789abcdef");
}
