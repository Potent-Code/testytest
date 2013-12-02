#include "testy.h"

extern test_case Tests[];


int main()
{
	test_result cur_result;
	int test_count = 0;
	int tests_passed = 0;
	int tests_failed = 0;
	test_case *i;
	test_result (*test_function)(void);
	
	for(i = Tests; i->name; i++)
	{
		test_count++;
		printf("Running test %s\n", i->name);
		test_function = i->function;
		cur_result = test_function();
		switch(cur_result)
		{
			case TEST_PASS:
				tests_passed++;
				break;
			case TEST_FAIL:
				tests_failed++;
				break;
		}
	}
	printf("Ran %d tests, %d passed and %d failed\n", test_count, tests_passed, tests_failed);
	return 0;
}
