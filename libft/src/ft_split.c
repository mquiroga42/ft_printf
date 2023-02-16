/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 08:20:00 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:07:26 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_split_time(char const *s, char c)
{
	size_t	response;

	response = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			response++;
			while (*s != c && *s != '\0')
				s++;
		}
		if (!*s)
			break ;
		s++;
	}
	return (response);
}

size_t	ft_split_next(const char *s, char c, size_t i)
{
	while (s[i] != '\0' && (unsigned char)s[i] == (unsigned char)c)
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**response;
	size_t	size;
	size_t	i;
	size_t	j;

	response = malloc(sizeof(char *) * (ft_split_time(s, c) + 1));
	if (!response)
		return (0);
	i = 0;
	j = -1;
	while (++j < ft_split_time(s, c) && s)
	{
		size = 0;
		i = ft_split_next(s, c, i);
		while (s[i] != '\0' && (unsigned char)s[i] != (unsigned char)c)
		{
			i++;
			size++;
		}
		response[j] = ft_substr(s, i - size, size);
	}
	response[j] = NULL;
	return (response);
}
