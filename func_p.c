/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kek.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 10:46:24 by groy              #+#    #+#             */
/*   Updated: 2019/12/12 16:39:28 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

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

void				kek(void *address)
{
	ft_putstr("0x");
	ft_putnbr_base((size_t)address, "0123456789abcdef");
}
