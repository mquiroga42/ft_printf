/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:30:10 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:07:26 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s)
{
	char	*response;
	int		i;
	int		size;

	size = 0;
	while (s[size])
		++size;
	response = malloc(sizeof(char) * (size + 1));
	if (response == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		response[i] = *s;
		s++;
		i++;
	}
	response[i] = '\0';
	return (response);
}
