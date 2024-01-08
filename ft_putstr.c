/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:29:27 by elbaraka          #+#    #+#             */
/*   Updated: 2023/12/22 05:40:28 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
		ft_putstr("(null)", len);
	while (str && str[i])
	{
		ft_putchar(str[i], len);
		i++;
	}
}
// int main ()
// {
// 	char str[] = "mehdi baraka";
// 	int len = 0;
// 	int i = 0;
// 	while(!str[i])
// 	{
// 		ft_putstr(str[i],&len);
// 		i++;
// 	}
// 	printf("%d",len );
// 	// printf("**** %d\n", printf("mehdi"));
// }
