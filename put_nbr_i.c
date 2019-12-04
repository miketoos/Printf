/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:16:42 by groy              #+#    #+#             */
/*   Updated: 2019/12/04 13:26:26 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_printf.h"

void		ft_putnbr_i(size_t nb)
{
	if (nb <= 9)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		ft_putnbr_i(nb / 10);
		ft_putnbr_i(nb % 10);
	}
}

int		main()
{
	int i;
	int *address;

	address = &i;
	printf("%zu\n", (size_t)address);
	ft_putnbr_i((size_t)address);
}
