/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:40:58 by groy              #+#    #+#             */
/*   Updated: 2020/02/28 11:59:19 by groy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	main()
{
	ft_printf("\t\t||\tTESTS FOR %%C\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("1\t%c\n", 'r'));
	ft_printf("||Returned: %d ||\n\n", ft_printf("2\t%c\n", -142));
	ft_printf("||Returned: %d ||\n\n", ft_printf("3\t%20c\n", -142));
	ft_printf("||Returned: %d ||\n\n", ft_printf("4\t%-20c\n", -142));
	ft_printf("||Returned: %d ||\n\n", ft_printf("\n5\tJust printing an r : %c\n", 'r'));
	ft_printf("||Returned: %d ||\n\n", ft_printf("6\tJust printing ok : %c and %c !\n", 'o', 'k'));

	printf("\t\t||\tTESTS FOR %%C\t||\n");
	printf("||Returned: %d ||\n\n", ft_printf("1\t%c\n", 'r'));
	printf("||Returned: %d ||\n\n", ft_printf("2\t%c\n", -142));
	printf("||Returned: %d ||\n\n", ft_printf("3\t%20c\n", -142));
	printf("||Returned: %d ||\n\n", ft_printf("4\t%-20c\n", -142));
	printf("||Returned: %d ||\n\n", ft_printf("\n5\tJust printing an r : %c\n", 'r'));
	printf("||Returned: %d ||\n\n", ft_printf("6\tJust printing ok : %c and %c !\n", 'o', 'k'));
}
