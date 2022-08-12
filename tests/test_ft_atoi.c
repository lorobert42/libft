/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorobert <lorobert@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:41:29 by lorobert          #+#    #+#             */
/*   Updated: 2022/08/12 09:00:06 by lorobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "munit/munit.h"
#include "libft.h"

static MunitResult	easy_test(const MunitParameter params[], void *data)
{
	char	*nbr = "42";

	(void)params;
	(void)data;
	munit_assert_int(ft_atoi(nbr), ==, atoi(nbr));
	return (MUNIT_OK);
}

static MunitResult	neg_test(const MunitParameter params[], void *data)
{
	char	*nbr = "-42";

	(void)params;
	(void)data;
	munit_assert_int(ft_atoi(nbr), ==, atoi(nbr));
	return (MUNIT_OK);
}

static MunitResult	pos_test(const MunitParameter params[], void *data)
{
	char	*nbr = "+42";

	(void)params;
	(void)data;
	munit_assert_int(ft_atoi(nbr), ==, atoi(nbr));
	return (MUNIT_OK);
}

static MunitResult	space_test(const MunitParameter params[], void *data)
{
	char	*nbr = " \t\v42";

	(void)params;
	(void)data;
	munit_assert_int(ft_atoi(nbr), ==, atoi(nbr));
	return (MUNIT_OK);
}

static MunitResult	space_neg_test(const MunitParameter params[], void *data)
{
	char	*nbr = " \t\v-42";

	(void)params;
	(void)data;
	munit_assert_int(ft_atoi(nbr), ==, atoi(nbr));
	return (MUNIT_OK);
}

static MunitResult	space_pos_test(const MunitParameter params[], void *data)
{
	char	*nbr = " \t\v+42";

	(void)params;
	(void)data;
	munit_assert_int(ft_atoi(nbr), ==, atoi(nbr));
	return (MUNIT_OK);
}

static MunitResult	invalid_test(const MunitParameter params[], void *data)
{
	char	*nbr = "--42";

	(void)params;
	(void)data;
	munit_assert_int(ft_atoi(nbr), ==, atoi(nbr));
	return (MUNIT_OK);
}

static MunitTest test_suite_tests[] = {
	{ (char *) "/easy", easy_test, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL },
	{ (char *) "/neg", neg_test, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL },
	{ (char *) "/pos", pos_test, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL },
	{ (char *) "/space", space_test, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL },
	{ (char *) "/space_neg", space_neg_test, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL },
	{ (char *) "/space_pos", space_pos_test, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL },
	{ (char *) "/invalid", invalid_test, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL },
	{ NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL }
};

static const MunitSuite test_suite = {
	(char *) "/ft_atoi",
	test_suite_tests,
	NULL,
	1,
	MUNIT_SUITE_OPTION_NONE
};

int	main(int argc, char *argv[MUNIT_ARRAY_PARAM(argc + 1)])
{
	return (munit_suite_main(&test_suite, (void *) "µnit", argc, argv));
}
