/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:54:38 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:06:43 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	if (!n)
		return (dest);
	if (dest > src)
	{
		while (((int)--n) >= 0)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			((char *)dest)[i] = ((char *)src)[i];
	}
	return (dest);
}
