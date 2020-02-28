/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:15:33 by groy              #+#    #+#             */
/*   Updated: 2020/02/28 15:30:42 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int			func_p(size_t nb, t_list *all)
{
	char *base;

	(void)all;
	base = "0123456789abcdef";
	if (nb < ft_strlen(base))
		ft_putchar(base[nb % ft_strlen(base)]);
	else if (nb > ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base(nb % ft_strlen(base), base);
	}
	return (0);
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

void				kek(void *address)
{
	ft_putchar('0');
	ft_putchar('x');
	ft_putnbr_base((size_t)address, "0123456789abcdef");
}
