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
	if (!c)
		return (0);
	else
		write(1, &c, 1);
	return (1);
}

int	ft_printf_str(char *str)
{
	int	i;

	if (!str)
		return (ft_printf_char('\0'));
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
	char	*number;
	char	*temp;
	int		lenght;

	number = ft_itoa((int)n);
	temp = number;
	while (!ft_isdigit(*number))
			number++;
	lenght = ft_printf_str(number);
	free(temp);
	return (lenght);
}
