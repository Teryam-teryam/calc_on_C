#include <stdio.h>
#include <assert.h>
#include "calc.h"

int total_tests = 0;
int tests_passed= 0;
int tests_failed= 0;

void check(int condition, const char* name)
{
	total_tests++;
	if (condition){tests_passed++;}
	else
	{
	tests_failed++;
	printf("[FAIL] %s\n", name);
	}
}


void test_add()
{
	check(add(2, 2) == 4, "add(2, 2) == 4)");
	check(add(2, 2) == 5, "add(2, 2) == 5)");
}

int main()
{
	test_add();
	printf("Number of total tests: %d\n",total_tests);
	printf("Number of tests passed: %d\n",tests_passed);
	printf("Number of tests failed: %d\n",tests_failed);
	return 0;
}
