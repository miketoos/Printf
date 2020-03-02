/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 14:24:14 by groy              #+#    #+#             */
/*   Updated: 2020/03/02 12:48:52 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	if (!(dest = malloc(sizeof(*s1) * (i + 1))))
		return (NULL);
	while (s1[j])
	{
		dest[j] = s1[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_cut(char *str, int n)
{
	char *ret;
	char *oui;

	if (!str)
		oui = ft_strdup("(null)");
	else
		oui = ft_strdup(str);
	if (n == -1)
		return (ft_strdup(""));
	ret = malloc(n);
	ret = ft_strncpy(ret, oui, n);
	return (ret);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
