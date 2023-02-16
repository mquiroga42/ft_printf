/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:33:49 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:04:58 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_putchar(const char *str)
{
	int	response;

	response = 0;
	while (*str >= '0' && *str <= '9')
	{
		response *= 10;
		response += (*str - '0');
		str++;
	}
	return (response);
}

int	ft_atoi(const char *str)
{
	int	negative;

	negative = 1;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'
			||*str == '\r' || *str == '\v' || *str == '\f'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = -1;
		str++;
		break ;
	}
	if (*str >= '0' && *str <= '9')
		return (negative * ft_putchar(str));
	return (0);
}
