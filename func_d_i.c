/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_d_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:15:20 by groy              #+#    #+#             */
/*   Updated: 2020/03/02 14:38:25 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int		ft_count_alloc(int n)
{
	unsigned int nb;
	int nbr;

	nbr = 0;
	if (n < 0)
	{
		nbr++;
		nb = n * -1;
	}
	else
		nb = n;
	if (nb <= 9)
	{
		nb/= 10;
		nbr++;
	}
	if (nb >  9)
	{
		nb /= 10;
		nbr++;
	}
	if (nb <= 9)
		nbr++;
	return (nbr);	
}

char	*func_i(int n, char *str)
{
	static int		i = 0;
	unsigned int	nb;

	if (n < 0)
	{
		str[i++] = '-';
		nb = n * -1;
	}
	else
		nb = n;
	if (nb <= 9)
		str[i++] = (nb + '0');
	else if (nb > 9)
	{
		func_i(nb / 10, str);
		func_i(nb % 10, str);
	}
	return (str);
}

int		ft_affch(int n, t_list *all)
{
	char *str;

	str = malloc(sizeof(char) * (ft_count_alloc(n) + 1));
	str = func_i(n, str);
	if ((all->point || all->width) && !(all->minus))
	{
		ft_blank(all->width - (all->point + ft_strlen(str)));
		ft_zero(all->point - ft_strlen(str));
		ft_putstr(str);
		return (ft_max(ft_strlen(str), all->point, all->width));
	}
	if ((all->point || all->width) && all->minus)
	{
		ft_zero(all->point - ft_strlen(str));
		ft_putstr(str);
		ft_blank(all->width - (all->point + ft_strlen(str)));
		return (ft_max(ft_strlen(str), all->point, all->width));
	}
	ft_putstr(str);
	return (ft_strlen(str));
	return (0);
}
