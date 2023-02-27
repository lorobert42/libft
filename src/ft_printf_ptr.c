/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:11:50 by lorobert          #+#    #+#             */
/*   Updated: 2023/02/27 14:20:06 by lorobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_ptr(t_conversion *c)
{
	uintptr_t	ptr;
	char		*s;
	int			count;

	ptr = va_arg(c->args, uintptr_t);
	if (!ptr)
		return (write(1, "0x0", 3));
	if (write(1, "0x", 2) < 0)
		return (-1);
	s = ft_itoa_ptr(ptr, 0);
	if (!s)
		return (-1);
	count = write(1, s, ft_strlen(s));
	free(s);
	if (count >= 0)
		return (count + 2);
	return (-1);
}
