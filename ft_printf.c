/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:13:30 by asezgin           #+#    #+#             */
/*   Updated: 2024/11/17 15:03:40 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_checker(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putnbr_unsigned(va_arg(args, int));
	else if (c == 'x')
		count += ft_hexadecimal(va_arg(args, unsigned int), 0);
	else if (c == 'X')
		count += ft_hexadecimal(va_arg(args, unsigned int), 1);
	else if (c == 'p')
		count += ft_adress(va_arg(args, unsigned long int));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_checker(*str, args);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	return (count);
}
