/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:13:09 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:06:26 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*response;
	size_t			i;

	response = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (response[i] == (unsigned char)c)
			return ((void *)&response[i]);
		i++;
	}
	return (NULL);
}
