/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asezgin <asezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:36:40 by asezgin           #+#    #+#             */
/*   Updated: 2024/11/17 15:03:31 by asezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_putstr(char *str);
int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_hexadecimal(unsigned long int args, int a);
int	ft_putnbr(int n);
int	ft_adress(unsigned long int nbr);
int	ft_putnbr_unsigned(unsigned int nbr);

#endif