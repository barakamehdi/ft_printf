/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:12:28 by elbaraka          #+#    #+#             */
/*   Updated: 2023/12/31 16:03:50 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_putnbr(int c, int *len)
{
	if (c == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (c >= 0 && c <= 9)
	{
		ft_putchar(c + '0', len);
	}
	else if (c > 9)
	{
		ft_putnbr(c / 10, len);
		ft_putnbr(c % 10, len);
	}
	else
	{
		ft_putchar('-', len);
		ft_putnbr((c * -1), len);
	}
}
// int main ()
// {
// 	int st = -772431;
// 	int len = 0;
// 	if (st)
// 	{
// 		ft_putnbr(st,&len);
// 	}
// 	printf("\n%d\n",len);
// }
