/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:16:55 by groy              #+#    #+#             */
/*   Updated: 2019/12/04 14:45:05 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

void		ft_hexa(size_t nb)
{
	char *base;

	base = "0123456789abcdef";
	if (nb < ft_strlen(base))
		ft_putchar(base[nb % ft_strlen(base)]);
	else if (nb > ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base(nb % ft_strlen(base), base);
	}
}
