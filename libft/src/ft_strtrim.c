/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:49:20 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:07:26 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size;
	char		*response;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (size && ft_strchr(set, s1[size]))
		size--;
	response = ft_substr((char *)s1, 0, size + 1);
	return (response);
}
