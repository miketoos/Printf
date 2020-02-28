/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:15:49 by groy              #+#    #+#             */
/*   Updated: 2020/02/28 15:14:46 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int		func_s(char *str, t_list *all)
{
	int tail;
	int i;

	i = 0;
	tail = all->width;
	if (all->point)
		str = ft_cut(str, all->point);
	if (all->minus && all->width)
	{
		while (tail-->0 && str[i])
			ft_putchar(str[i++]);
		if (tail > 0)
			ft_blank(tail);
		return (all->width);
	}
	else if (!(all->minus) && all->width)
	{
		ft_blank(tail - ft_strlen(str));
		ft_putstr(str);
		return (all->width);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}
