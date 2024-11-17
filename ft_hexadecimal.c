/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:14:01 by asezgin           #+#    #+#             */
/*   Updated: 2024/11/17 10:03:14 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned long int args, int a)
{
	char	*e;
	int		d;

	d = 0;
	e = "0123456789abcdef";
	if (a == 1)
		e = "0123456789ABCDEF";
	if (args >= 16)
		d += ft_hexadecimal(args / 16, a);
	d += ft_putchar(e[args % 16]);
	return (d);
}
