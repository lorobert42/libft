/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:11:50 by lorobert          #+#    #+#             */
/*   Updated: 2023/02/27 14:18:21 by lorobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_hex(t_conversion *c, int is_upp)
{
	unsigned int	n;
	char			*s;
	int				count;

	n = va_arg(c->args, unsigned int);
	s = ft_itoa_hex(n, is_upp);
	if (!s)
		return (-1);
	count = write(1, s, ft_strlen(s));
	free(s);
	return (count);
}
