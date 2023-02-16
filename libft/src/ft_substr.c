/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:26:31 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:07:26 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*response;
	size_t	i;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		return (ft_strdup(s + start));
	i = 0;
	response = malloc(sizeof(char) * len + 1);
	if (!response)
		return (0);
	while (i < len)
	{
		response[i] = ((char *)s)[start + i];
		i++;
	}
	response[i] = '\0';
	return (response);
}
