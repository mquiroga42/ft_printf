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

int	ft_printf_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf_str(char *str)
{
	int	i;

	if (!str)
	{
		ft_printf_str("(null)");
		return (6);
	}
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	return (i);
}

int	ft_printf_int(int n)
{
	char	*number;
	int		lenght;

	number = ft_itoa(n);
	lenght = ft_printf_str(number);
	free(number);
	return (lenght);
}

int	ft_printf_uint(unsigned int n)
{
	char	*temp;
	int		lenght;

	temp = ft_uitoa(n);
	lenght = ft_printf_str(temp);
	free(temp);
	return (lenght);
}
