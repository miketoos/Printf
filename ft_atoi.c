/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:03:40 by groy              #+#    #+#             */
/*   Updated: 2019/12/14 15:55:30 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

static int			ft_return(unsigned long long nb, int count)
{
	if (nb > 9223372036854775807)
	{
		if (count == -1)
			return (0);
		return (-1);
	}
	return (nb * count);
}

int					ft_atoi(const char *str, int len)
{
	int					i;
	int					count;
	unsigned long long	nb;

	nb = 0;
	i = 0;
	count = 1;
	while (((str[i] > 8 && str[i] < 14) || str[i] == 32) && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] && len-- > 0)
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (ft_return(nb, count));
}
