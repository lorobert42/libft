/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <lorobert@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 16:34:57 by lorobert          #+#    #+#             */
/*   Updated: 2022/08/23 14:22:02 by lorobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", ft_substr("tripouille", 100, 1));
	printf("%s\n", ft_substr("1", 42, 42000000));
}
