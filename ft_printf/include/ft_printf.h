/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyberoot <cyberoot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:26:27 by cyberoot          #+#    #+#             */
/*   Updated: 2023/01/20 09:16:35 by cyberoot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "../../libft/include/libft.h"

int	ft_printf(char const *arg, ...);
int	ft_printf_char(int c);
int	ft_printf_str(char *str);
int	ft_printf_int(int n);
int	ft_printf_uint(unsigned int n);
int	ft_printf_hex(unsigned int n, int upper);
int	ft_printf_point( unsigned  long);

#endif