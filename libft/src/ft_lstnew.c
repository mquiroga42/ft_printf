/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:06:01 by mquiroga          #+#    #+#             */
/*   Updated: 2022/10/19 09:06:18 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*response;

	response = (t_list *)malloc(sizeof(t_list));
	if (!response)
		return (0);
	response->content = content;
	response->next = 0;
	return (response);
}
