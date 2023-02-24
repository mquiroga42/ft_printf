/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:36:42 by cyberoot          #+#    #+#             */
/*   Updated: 2023/01/20 09:18:21 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/include/ft_printf.h"

int	main(void)
{
	int param;

	param = 25;
	printf("\nSTART\n\n");
	printf("\t%d", printf("Hola 100%%"));
	printf("\n");
	printf("\t%d", ft_printf("Hola 100%%"));
	printf("\n\nFINISH\n");
	return (0);
}
