/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:07:42 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:07:26 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*response;
	size_t	i;

	i = 0;
	response = NULL;
	while ((unsigned char)s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			response = &((char *)s)[i];
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return (&((char *)s)[i]);
	return (response);
}
