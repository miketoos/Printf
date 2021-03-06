/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:15:05 by groy              #+#    #+#             */
/*   Updated: 2020/03/02 16:48:03 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	func_c(int c, t_list *all)
{
	char a;

	if (all->minus == 0)
		ft_blank(all->width - 1);
	a = (unsigned char)c;
	write(1, &a, 1);
	if (all->minus == 1)
		ft_blank(all->width - 1);
	if (c != 0)
		return (all->width);
	return (ft_max(all->width, 1, 0));
}
