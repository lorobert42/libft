/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:17:20 by lorobert          #+#    #+#             */
/*   Updated: 2022/10/11 10:47:09 by lorobert         ###   ########.fr       */
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
#include "libft.h"

int	main()
{
	// isalpha
	printf("Testing isalpha\n");
	if (ft_isalpha('A') == isalpha('A'))
		printf(GREEN "A is alpha" RESET "\n");
	else
		fprintf(stderr, RED "A is not alpha" RESET "\n");
}
