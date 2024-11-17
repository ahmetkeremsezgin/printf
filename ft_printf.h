/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:36:40 by asezgin           #+#    #+#             */
/*   Updated: 2024/11/13 02:51:45 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_putstr(char *str);
int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_hexadecimal(unsigned long int args, int a);
int	ft_putnbr(int n);
int	ft_adress(unsigned long int nbr);
int	ft_putnbr_unsigned(unsigned long int nbr);

#endif