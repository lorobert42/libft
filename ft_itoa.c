/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <lorobert@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:59:07 by lorobert          #+#    #+#             */
/*   Updated: 2022/08/12 16:28:10 by lorobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

size_t	ft_len_nbr(long int n)
{
	size_t	radix;

	radix = 1;
	while (n >= 10)
	{
		radix++;
		n /= 10;
	}
	return (radix);
}

int	ft_check_neg(long int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*nbr;
	long int	ln;
	int			neg;

	ln = n;
	neg = ft_check_neg(ln);
	if (neg)
		ln *= -1;
	len = ft_len_nbr(ln);
	nbr = malloc(sizeof(char) * (len + neg + 1));
	if (!nbr)
		return (NULL);
	if (neg)
		nbr[0] = '-';
	nbr[len-- + neg] = '\0';
	while (len)
	{
		nbr[len + neg] = (ln % 10) + '0';
		ln /= 10;
		len--;
	}
	nbr[neg] = ln + '0';
	return (nbr);
}
