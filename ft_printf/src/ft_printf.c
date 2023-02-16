/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:36:06 by cyberoot          #+#    #+#             */
/*   Updated: 2023/01/20 09:16:59 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

#include <stdio.h>

int	ft_formats(va_list args, char format)
{
	int	str_size;

	str_size = 0;
	if (format == 'c')
		str_size += ft_printf_char(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		str_size += ft_printf_int(va_arg(args, int));
	else if (format == 's')
		str_size += ft_printf(va_arg(args, char *));
	else if (format == 'u')
		str_size += ft_printf_uint(va_arg(args, unsigned int));
	return (str_size);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		response;
	int		i;

	i = 0;
	response = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			response += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			response += ft_printf_char(str[i]);
		i++;
	}
	va_end(args);
	return (response);
}
