/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:13:52 by elbaraka          #+#    #+#             */
/*   Updated: 2023/12/29 15:22:55 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long c, int *len, int d)
{
	char	*str;

	str = "0123456789abcdef";
	if (d)
		ft_putstr("0x", len);
	if (c < 16)
	{
		ft_putchar(str[c], len);
	}
	else
	{
		ft_putptr(c / 16, len, 0);
		ft_putchar(str[c % 16], len);
	}
}
// int main ()
// {

// 	unsigned int  *s;
// 	unsigned int d;
// 	d = 0xdfeacb;
// 	s = &d;
// 	int len = 0;
// 	ft_putptr (d,&len,1);
// 	printf("\n%p",&s);
// 	printf("\n%d\n",len);
// }
