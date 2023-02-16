/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:57:53 by cyberoot          #+#    #+#             */
/*   Updated: 2022/10/19 09:06:13 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*response;
	t_list	*new;

	if (!lst)
		return (0);
	response = ft_lstnew((*f)(lst->content));
	if (!response)
		return (0);
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&response, (*del));
			return (0);
		}
		ft_lstadd_back(&response, new);
		lst = lst->next;
	}
	return (response);
}
