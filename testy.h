#ifndef __TESTY_H__
#define __TESTY_H__

#include <stdio.h>
#include <stdlib.h>

typedef enum
{
	TEST_PASS = 0,
	TEST_FAIL
} test_result;


typedef struct
{
	char* name;
	char* description;
	void (*function);
} test_case;

#endif
