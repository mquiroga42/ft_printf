/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:17:57 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:05:45 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*get_response(char *response, int size, int n)
{
	int	aux;
	int	negative;

	if (!size)
		return (ft_strdup(""));
	negative = 0;
	if (n < 0)
	{
		n *= -1;
		negative = 1;
	}
	aux = n;
	response[size] = '\0';
	size--;
	while (size >= 0)
	{
		aux = n % 10;
		n /= 10;
		response[size] = aux + '0';
		size--;
	}
	if (negative)
		response[0] = '-';
	return (response);
}

static size_t	get_intlenght(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*response;

	if (!n)
		return (ft_strdup("0"));
	if (n == -2147483648)
	{
		response = ft_strdup("-2147483648");
		return (response);
	}
	response = malloc(sizeof(char) * get_intlenght(n) + 1);
	if (!response)
		return (0);
	response = get_response(response, (int)get_intlenght(n), n);
	return (response);
}
