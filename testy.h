#ifndef __TESTY_H__
#define __TESTY_H__

#include <stdio.h>
#include <stdlib.h>

typedef enum
{
	TEST_FAIL = 0,
	TEST_PASS
} test_result;


typedef struct
{
	char* name;
	char* description;
	void (*function);
} test_case;

#endif
