/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_d_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:15:20 by groy              #+#    #+#             */
/*   Updated: 2020/02/28 10:20:33 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int		func_d(int n, t_list *all)
{
	(void)all;
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar('-');
		nb = n * -1;
	}
	else
		nb = n;
	if (nb <= 9)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		func_d(nb / 10, all);
		func_d(nb % 10, all);
	}
	return (0);
}

int		func_i(int n, t_list *all)
{
	(void)all;
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar('-');
		nb = n * -1;
	}
	else
		nb = n;
	if (nb <= 9)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		func_i(nb / 10, all);
		func_i(nb % 10, all);
	}
	return (0);
}
