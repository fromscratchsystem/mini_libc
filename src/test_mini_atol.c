#include "test_mini_libc.h"

int	test_mini_atol_base(void)
{
	long	to_test;
	long	tested;

	to_test = mini_atol("-9223372036854775808");
	tested = atol("-9223372036854775808");
	if (to_test != tested)
	{
		puts("Test LONG_MIN failed");
		printf("%li <- to_test\n", to_test);
		mini_print_clean_memory(&to_test, sizeof (to_test), "to_test");
		printf("%li <- tested\n", tested);
		mini_print_clean_memory(&tested, sizeof (tested), "tested");
		puts("need to match");
		return (1);
	}
	to_test = mini_atol("9223372036854775807");
	tested = atol("9223372036854775807");
	if (to_test != tested)
	{
		puts("Test LONG_MAX failed");
		printf("%li <- to_test\n", to_test);
		mini_print_clean_memory(&to_test, sizeof (to_test), "to_test");
		printf("%li <- tested\n", tested);
		mini_print_clean_memory(&tested, sizeof (tested), "tested");
		puts("need to match");
		return (1);
	}
	to_test = mini_atol("000");
	tested = atol("000");
	if (to_test != tested)
	{
		puts("Test 000 failed");
		printf("%li <- to_test\n", to_test);
		mini_print_clean_memory(&to_test, sizeof (to_test), "to_test");
		printf("%li <- tested\n", tested);
		mini_print_clean_memory(&tested, sizeof (tested), "tested");
		puts("need to match");
		return (1);
	}
	to_test = mini_atol("-000");
	tested = atol("-000");
	if (to_test != tested)
	{
		puts("Test -000 failed");
		printf("%li <- to_test\n", to_test);
		mini_print_clean_memory(&to_test, sizeof (to_test), "to_test");
		printf("%li <- tested\n", tested);
		mini_print_clean_memory(&tested, sizeof (tested), "tested");
		puts("need to match");
		return (1);
	}
	to_test = mini_atol("42");
	tested = atol("42");
	if (to_test != tested)
	{
		puts("Test 42 failed");
		printf("%li <- to_test\n", to_test);
		mini_print_clean_memory(&to_test, sizeof (to_test), "to_test");
		printf("%li <- tested\n", tested);
		mini_print_clean_memory(&tested, sizeof (tested), "tested");
		puts("need to match");
		return (1);
	}
	to_test = mini_atol("-42");
	tested = atol("-42");
	if (to_test != tested)
	{
		puts("Test -42 failed");
		printf("%li <- to_test\n", to_test);
		mini_print_clean_memory(&to_test, sizeof (to_test), "to_test");
		printf("%li <- tested\n", tested);
		mini_print_clean_memory(&tested, sizeof (tested), "tested");
		puts("need to match");
		return (1);
	}
	to_test = mini_atol("-4002");
	tested = atol("-4002");
	if (to_test != tested)
	{
		puts("Test -4002 failed");
		printf("%li <- to_test\n", to_test);
		mini_print_clean_memory(&to_test, sizeof (to_test), "to_test");
		printf("%li <- tested\n", tested);
		mini_print_clean_memory(&tested, sizeof (tested), "tested");
		puts("need to match");
		return (1);
	}
		return (0);
}
