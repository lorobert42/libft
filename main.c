/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:17:20 by lorobert          #+#    #+#             */
/*   Updated: 2022/10/11 13:51:03 by lorobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include "libft.h"

void	print_error(char *msg)
{
	fprintf(stderr, RED "%s" RESET "\n", msg);
}

void	print_ok(char *msg)
{
	fprintf(stdout, GREEN "%s" RESET "\n", msg);
}

int	main()
{
	// isalpha
	printf("Testing isalpha\n");
	for (unsigned char c = 0; c < 255; c++)
	{
		if ((bool)ft_isalpha(c) == (bool)isalpha(c))
			continue ;
		else
		{
			print_error(strcat(&c, "is not alpha"));
			return (0);
		}
	}
	print_ok("Everything OK");
}
