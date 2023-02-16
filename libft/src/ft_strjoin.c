/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 09:43:13 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:07:26 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*response;

	size = sizeof(char) * (ft_strlen(s1) + ft_strlen(s2));
	response = malloc(size + 1);
	if (response == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		response[i] = ((char *)s1)[i];
		i++;
	}
	j = 0;
	while (i < size)
	{
		response[i] = ((char *)s2)[j];
		i++;
		j++;
	}
	response[size] = 0;
	return (response);
}
