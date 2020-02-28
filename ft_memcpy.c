/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:29:37 by groy              #+#    #+#             */
/*   Updated: 2019/11/25 20:48:51 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*str;
	const unsigned char	*str2;

	if (!dst && !src)
		return (0);
	str2 = src;
	str = dst;
	while (n-- > 0)
		*str++ = *str2++;
	return (dst);
}
