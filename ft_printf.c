/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:45:46 by elbaraka          #+#    #+#             */
/*   Updated: 2023/12/31 16:03:36 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	percent(va_list ap, char c, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int), len);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), len);
	else if ((c == 'i') || (c == 'd'))
		ft_putnbr(va_arg(ap, int), len);
	else if (c == 'u')
		ft_putunsigned(va_arg(ap, unsigned int), len);
	else if (c == 'p')
		ft_putptr((unsigned long)va_arg(ap, void *), len, 1);
	else if (c == 'x')
		ft_puthex_lower(va_arg(ap, unsigned int), len);
	else if (c == 'X')
		ft_puthex_upper(va_arg(ap, unsigned int), len);
	else if (c == '%')
		ft_putchar('%', len);
	else if (c != '\0')
		(*len)++;
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		len;

	va_start(ap, str);
	i = 0;
	len = 0;
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			i++;
			percent(ap, str[i], &len);
		}
		else
			ft_putchar(str[i], &len);
		i += str[i] != '\0';
	}
	va_end(ap);
	return (len);
}
//  int	main(void)
// {
//  	// const char	*str = "Hello %s , allo%d  this is a ptr! %p";
// int			num;
// // int len = 0;
// void		*ptr;
// char		name[] = "mehdi baraka";
// int			printed_chars;
// 	num = 42;
// 		ptr = &num;
// 		printed_chars= ft_printf(str,name,num,&ptr);
// 	ft_printf("\n%d\n",printed_chars);
// 		// printf("\n%d\n",len);
// // 			printed_chars = printf(str, name, num, ptr);
// // 			printf("\n%i\n",ft_printf("hellosdasdM%%"));
// // ft_printf("\n %i",printf("hellosdasdM%%"));
// }
