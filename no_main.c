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
	printf("\nSTART\n\n");
	printf("\t%d", ft_printf("%c", '\0'));printf("\n");
	printf("\t%d", ft_printf("%c", 'a'));printf("\n");
	printf("\t%d", ft_printf("%s", "Hola Mundo"));printf("\n");
	printf("\t%d", ft_printf("%d", +123));printf("\n");
	printf("\t%d", ft_printf("%u", -123));printf("\n");

	printf("\n\n");
	printf("\t%d", printf("%i", -10));printf("\n");

	printf("\n\nFINISH\n\n");
	return (0);
}
