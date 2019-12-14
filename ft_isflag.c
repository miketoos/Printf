/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:59:47 by groy              #+#    #+#             */
/*   Updated: 2019/12/14 14:42:40 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_isflag(int c)
{
	return (('0' <= c && '9' >= c) || c == '*' || c == '.' || c == '-'
			|| c == '%');
}

int	ft_isdigit(int c)
{
	return ('0' < c && '9' >= c);
}

int	ft_isconversion(int c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
			|| c == 'u' || c == 'x' || c == 'X');
}

int	ft_issth(int c)
{
	return (ft_isflag(c) || ft_isconversion(c));
}
