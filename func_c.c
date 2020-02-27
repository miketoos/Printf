/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 11:52:49 by groy              #+#    #+#             */
/*   Updated: 2020/02/27 14:28:45 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	func_c (int c, t_list *all)
{
	char a;

	if (all->minus == 0)
		ft_blank(all->width);
	a = (unsigned char)c;
	write(1, &a, 1);
	if (all->minus == 1)
		ft_blank(all->width);
	return (all->width + 1);
}
