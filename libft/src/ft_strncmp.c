/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:06:56 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:07:26 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if ((unsigned char *)s1 == (unsigned char *)s2 || !n)
		return (0);
	i = 0;
	while (*s1 && *s2 && *(unsigned char *)s1 == *(unsigned char *)s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((*(unsigned char *)s1 - *(unsigned char *)s2));
}
