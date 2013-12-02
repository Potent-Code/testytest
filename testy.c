#include "testy.h"

extern test_case Tests[];


int main()
{
	int test_count = 0;
	test_case *i;
	
	for(i = Tests; i->name ; i++)
	{
		test_count++;
		printf("Running test %s\n", i->name);
	}
	printf("Ran %d tests\n", test_count);
	return 0;
}
