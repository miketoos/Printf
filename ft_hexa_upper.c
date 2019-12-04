/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:23:41 by groy              #+#    #+#             */
/*   Updated: 2019/12/04 14:45:27 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

void				ft_hexa_upper(size_t nb)
{
	char *base;

	base = "0123456789ABCDEF";
	if (nb < ft_strlen(base))
		ft_putchar(base[nb % ft_strlen(base)]);
	else if (nb > ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base(nb % ft_strlen(base), base);
	}
}
