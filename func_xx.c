/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_xx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:16:20 by groy              #+#    #+#             */
/*   Updated: 2020/02/28 10:16:23 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int				func_xx(size_t nb, t_list *all)
{
	(void)all;
	char *base;

	base = "0123456789ABCDEF";
	if (nb < ft_strlen(base))
		ft_putchar(base[nb % ft_strlen(base)]);
	else if (nb > ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putnbr_base(nb % ft_strlen(base), base);
	}
	return (0);
}
