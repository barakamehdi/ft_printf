/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbaraka <elbaraka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:19:56 by elbaraka          #+#    #+#             */
/*   Updated: 2023/12/31 16:04:22 by elbaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putunsigned(unsigned int c, int *len);
void	ft_putnbr(int c, int *len);
void	ft_puthex_lower(unsigned int nbr, int *len);
void	ft_putptr(unsigned long c, int *len, int d);
void	ft_puthex_upper(unsigned int nbr, int *len);

#endif
