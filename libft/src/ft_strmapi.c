/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:52:03 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:07:26 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*response;
	size_t	size;
	size_t	i;

	if (!s)
		return (0);
	size = ft_strlen(s);
	response = malloc(sizeof(char) * size + 1);
	if (!response)
		return (0);
	i = 0;
	while (i != size)
	{
		response[i] = (*f)(i, s[i]);
		i++;
	}
	response[i] = '\0';
	return (response);
}
