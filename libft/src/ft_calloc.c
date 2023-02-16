/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:30:10 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:05:23 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*response;

	response = malloc(nmemb * size);
	if (!response)
		return (NULL);
	ft_bzero(response, size * nmemb);
	return (response);
}
