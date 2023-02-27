/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:11:50 by lorobert          #+#    #+#             */
/*   Updated: 2023/02/27 14:20:16 by lorobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_uint(t_conversion *c)
{
	unsigned int	n;
	char			*s;
	int				count;

	n = va_arg(c->args, unsigned int);
	s = ft_itoa_unsigned(n);
	if (!s)
		return (-1);
	count = write(1, s, ft_strlen(s));
	free(s);
	return (count);
}
