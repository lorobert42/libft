/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <lorobert@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 16:34:57 by lorobert          #+#    #+#             */
/*   Updated: 2022/08/08 13:53:09 by lorobert         ###   ########.fr       */
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
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
}
