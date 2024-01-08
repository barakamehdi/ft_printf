/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:49:28 by elbaraka          #+#    #+#             */
/*   Updated: 2023/12/31 15:24:24 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int c, int *len)
{
	if (c >= 0 && c <= 9)
	{
		ft_putchar(c + '0', len);
	}
	if (c > 9)
	{
		ft_putunsigned(c / 10, len);
		ft_putchar(c % 10 + '0', len);
	}
}
//  int main ()
//  {
//  	 unsigned int st = 784578469;
//  	int len = 0;
//  	ft_putunsigned(st,&len);
//  	ft_printf("\n%d",len);
// }
