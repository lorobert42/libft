/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <lorobert@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:41:29 by lorobert          #+#    #+#             */
/*   Updated: 2022/08/10 19:47:28 by lorobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main()
{
	printf("Start of ft_atoi tests\n");
	printf("Testing '42'\n");
	printf("Original atoi: %d\n", atoi("42"));
	printf("ft_atoi: %d\n", ft_atoi("42"));
	printf("End of ft_atoi tests\n");
}
