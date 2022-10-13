/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:17:20 by lorobert          #+#    #+#             */
/*   Updated: 2022/10/12 12:02:49 by lorobert         ###   ########.fr       */
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
	// memcpy
	printf("Testing memcpy\n");
	if (ft_memcpy(NULL, strdup("test"), 3) == memcpy(NULL, strdup("test"), 3))
		print_ok("NULL, test, 3");
	else
		print_error("NULL, test, 3");
	if (ft_memcpy(NULL, NULL, 3) == memcpy(NULL, NULL, 3))
		print_ok("NULL, NULL, 3");
	else
		print_error("NULL, NULL, 3");
}
