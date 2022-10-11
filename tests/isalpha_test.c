#include "CUnit/Basic.h"
#include "../ft_isalpha.c"

void	isalpha_A()
{
	CU_ASSERT_EQUAL(ft_isalpha('A'), 1);
}

void	isalpha_1()
{
	CU_ASSERT_EQUAL(ft_isalpha('1'), 0);
}

int main()
{
	if (CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();
	CU_basic_set_mode(CU_BRM_VERBOSE);

	CU_pSuite pSuite = NULL;

	pSuite = CU_add_suite("isalpha", 0, 0);

	if (NULL == pSuite)
	{
		CU_cleanup_registry();
		return (CU_get_error());
	}

	if (NULL == CU_add_test(pSuite, "isalpha A", isalpha_A))
	{
		CU_cleanup_registry();
		return (CU_get_error());
	}

	if (NULL == CU_add_test(pSuite, "isalpha 1", isalpha_1))
	{
		CU_cleanup_registry();
		return (CU_get_error());
	}

	CU_basic_run_tests();
	return (CU_get_error());
}
