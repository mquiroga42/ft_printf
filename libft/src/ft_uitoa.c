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
#include <limits.h>

static char	*get_response(char *response, int size, unsigned int n)
{
	unsigned int	aux;

	if (!size)
		return (ft_strdup(""));
	if (n > UINT_MAX)
		return (NULL);
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
	return (response);
}

static size_t	get_uintlenght(unsigned int n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*response;

	if (!n)
		return (ft_strdup("0"));
	response = malloc(sizeof(char) * get_uintlenght(n) + 1);
	if (!response)
		return (0);
	response = get_response(response, (int)get_uintlenght(n), n);
	if (!response)
		return (NULL);
	return (response);
}
