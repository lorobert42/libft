/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <lorobert@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:41:29 by lorobert          #+#    #+#             */
/*   Updated: 2022/08/11 10:51:26 by lorobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "munit/munit.h"
#include "libft.h"

static MunitResult	ft_atoi_test(const MunitParameter params[], void *data)
{
	char	*easy = "42";

	(void)params;
	(void)data;
	munit_assert_int(ft_atoi(easy), ==, 42);
	return (MUNIT_OK);
}

static MunitTest test_suite_tests[] = {
	{
		(char *) "/ft_atoi",
		ft_atoi_test,
		NULL,
		NULL,
		MUNIT_TEST_OPTION_NONE,
		NULL
	},
	{ NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL }
};

static const MunitSuite test_suite = {
	(char *) "",
	test_suite_tests,
	NULL,
	1,
	MUNIT_SUITE_OPTION_NONE
};

int	main(int argc, char *argv[MUNIT_ARRAY_PARAM(argc + 1)])
{
	return (munit_suite_main(&test_suite, (void *) "µnit", argc, argv));
	printf("Start of ft_atoi tests\n");
	printf("Testing '42'\n");
	printf("Original atoi: %d\n", atoi("42"));
	printf("ft_atoi: %d\n", ft_atoi("42"));
	printf("End of ft_atoi tests\n");
}
