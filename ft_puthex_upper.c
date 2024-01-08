/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:56:26 by elbaraka          #+#    #+#             */
/*   Updated: 2023/12/18 05:29:17 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_upper(unsigned int nbr, int *len)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_puthex_upper(nbr / 16, len);
		ft_putchar(str[nbr % 16], len);
	}
	else
		ft_putchar(str[nbr], len);
}

// int main() {
//     unsigned int nbr = 0xFECAF;
//     int len = 0;
//     ft_puthex_upper(nbr, &len);
// 	printf("\n%d",len);
//     return (0);
// }
