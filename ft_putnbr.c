/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:14:33 by asezgin           #+#    #+#             */
/*   Updated: 2024/11/17 10:12:56 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	long	l_num;

	l_num = n;
	count = 0;
	if (l_num == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putchar('2');
		l_num = 147483648;
	}
	if (l_num < 0)
	{
		count += ft_putchar('-');
		l_num = l_num * -1;
	}
	if (l_num > 9)
	{
		count += ft_putnbr(l_num / 10);
		count += ft_putnbr(l_num % 10);
	}
	else
		count += ft_putchar(l_num + 48);
	return (count);
}
