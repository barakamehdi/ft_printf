/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:16:34 by elbaraka          #+#    #+#             */
/*   Updated: 2023/12/26 03:30:46 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_lower(unsigned int nbr, int *len)
{
	char	*str;

	str = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_puthex_lower(nbr / 16, len);
		ft_putchar(str[nbr % 16], len);
	}
	else
		ft_putchar(str[nbr], len);
}
// int main() {
//     unsigned int b  = 0xCEDAB;
// 	int len = 0;
// 	ft_puthex_lower(b, &len);

// 	printf("\n%d",len);
//     return (0);
// }
