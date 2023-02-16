/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:51:24 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:07:26 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	i;

	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (!size)
		return (size_src);
	if (size < size_dst)
		size_src += size;
	else
		size_src += size_dst;
	i = 0;
	while (src[i] && ((size_dst + i) < size - 1))
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	return (size_src);
}
