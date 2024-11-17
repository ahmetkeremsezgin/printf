/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:16:33 by asezgin           #+#    #+#             */
/*   Updated: 2024/11/17 10:02:36 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adress(unsigned long int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (ft_putstr("(nil)"));
	count += ft_putchar('0');
	count += ft_putchar('x');
	count += ft_hexadecimal(nbr, 0);
	return (count);
}
