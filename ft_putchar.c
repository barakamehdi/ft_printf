/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:04:04 by elbaraka          #+#    #+#             */
/*   Updated: 2023/12/20 02:59:23 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}
// int main ()
// {
// 	char *s = ;
// 	int count = 0;
// 	int i = 0;
// 	while (s[i])
// 	{
// 		ft_putchar(s[i],&count);
// 		i++;
// 	}
// 	printf("==>%d\n", count);
// 	// printf("**** %d\n", printf("mehdi"));
// 	return (0);
// }
