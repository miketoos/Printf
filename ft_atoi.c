/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:03:40 by groy              #+#    #+#             */
/*   Updated: 2020/03/02 11:59:02 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int					ft_atoi(const char *str)
{
	int					i;
	int					zero;
	unsigned long long	nb;

	nb = 0;
	i = 0;
	zero = 0;
	while (str[i] == '0')
	{
		i++;
		zero++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (nb == 0)
		return (-1);
	return (nb);
}
