/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:15:49 by groy              #+#    #+#             */
/*   Updated: 2020/03/02 12:46:45 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int		func_s(char *str, t_list *all)
{
	int tail;

	tail = all->width;
	if (!str)
		str = ft_strdup("(null)");
	if (all->point)
		str = ft_cut(str, all->point);
	if (all->minus && all->width)
	{
		ft_putstr(str);
		tail -= ft_strlen(str);
		if (tail > 0)
			ft_blank(tail);
		if (all->width > ft_strlen(str))
			return (all->width);
		return (ft_strlen(str));
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
