#include "testy.h"


test_result basic_test()
{
	return TEST_PASS;
}

test_case Tests[] =
{
	{"Test 1", "Description of Test 1", basic_test},
	{"Test 2", "Description of Test 2, though it's the same test", basic_test},
	NULL
};
