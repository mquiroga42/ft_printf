/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:09:33 by cyberoot          #+#    #+#             */
/*   Updated: 2023/01/20 09:23:25 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf_hex(unsigned int n, int upper)
{
	char	hex[16];
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (i < 16)
	{
		if (i < 10)
			hex[i] = '0' + i;
		else if (upper)
			hex[i] = 'A' + i - 10;
		else
			hex[i] = 'a' + i - 10;
		i++;
	}
	if (n < 16)
		return (ft_printf_char(hex[n]));
	count = ft_printf_hex(n / 16, upper);
	return (ft_printf_char(hex[n % 16]) + count);
}

static int	ft_printf_ulhex(unsigned long long n, int upper)
{
	char				hex[16];
	unsigned long long	count;
	unsigned long long	i;

	i = 0;
	count = 0;
	while (i < 16)
	{
		if (i < 10)
			hex[i] = '0' + i;
		else if (upper)
			hex[i] = 'A' + i - 10;
		else
			hex[i] = 'a' + i - 10;
		i++;
	}
	if (n < 16)
		return (ft_printf_char(hex[n]));
	count = ft_printf_ulhex(n / 16, upper);
	return (ft_printf_char(hex[n % 16]) + count);
}

int	ft_printf_point(unsigned long long pointer)
{
	ft_printf_str("0x");
	if (!pointer)
		return (write(1, "0", 1), 3);
	return (2 + (ft_printf_ulhex(pointer, 0)));
}
