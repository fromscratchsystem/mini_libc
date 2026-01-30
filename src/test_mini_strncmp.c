#include "test_mini_libc.h"

int	test_mini_strncmp_base(void)
{
	char	*to_test;
	char	*tested;

	to_test = malloc(20);
	if (!to_test)
		return (1);
	strncpy(to_test, "abc", 20);
	tested = malloc(20);
	if (!tested)
		return (free(to_test), 1);
	strncpy(tested, "abc", 20);
	if (strncmp(to_test, tested, 3) != mini_strncmp(to_test, tested, 3))
	{
		puts("strncmp(to_test, tested, 3) != mini_strncmp(to_test, tested, 3)");
		mini_print_clean_memory(to_test, 20, "to_test");
		mini_print_clean_memory(tested, 20, "tested");
		return (free(to_test), free(tested), 1);
	}
	if (strncmp(to_test, tested, 2) != mini_strncmp(to_test, tested, 2))
	{
		puts("strncmp(to_test, tested, 2) != mini_strncmp(to_test, tested, 2)");
		mini_print_clean_memory(to_test, 20, "to_test");
		mini_print_clean_memory(tested, 20, "tested");
		return (free(to_test), free(tested), 1);
	}
	if (strncmp(to_test, tested, 0) != mini_strncmp(to_test, tested, 0))
	{
		puts("strncmp(to_test, tested, 0) != mini_strncmp(to_test, tested, 0)");
		mini_print_clean_memory(to_test, 20, "to_test");
		mini_print_clean_memory(tested, 20, "tested");
		return (free(to_test), free(tested), 1);
	}
	strncpy(to_test, "abb", 20);
	if (strncmp(to_test, tested, 3) != mini_strncmp(to_test, tested, 3))
	{
		puts("strncmp(to_test, tested, 3) != mini_strncmp(to_test, tested, 3)");
		mini_print_clean_memory(to_test, 20, "to_test");
		mini_print_clean_memory(tested, 20, "tested");
		return (free(to_test), free(tested), 1);
	}
	if (strncmp(to_test, tested, 2) != mini_strncmp(to_test, tested, 2))
	{
		puts("strncmp(to_test, tested, 2) != mini_strncmp(to_test, tested, 2)");
		mini_print_clean_memory(to_test, 20, "to_test");
		mini_print_clean_memory(tested, 20, "tested");
		return (free(to_test), free(tested), 1);
	}
	strncpy(to_test, "abd", 20);
	if (strncmp(to_test, tested, 3) != mini_strncmp(to_test, tested, 3))
	{
		puts("strncmp(to_test, tested, 3) != mini_strncmp(to_test, tested, 3)");
		mini_print_clean_memory(to_test, 20, "to_test");
		mini_print_clean_memory(tested, 20, "tested");
		return (free(to_test), free(tested), 1);
	}
	if (strncmp(to_test, tested, 2) != mini_strncmp(to_test, tested, 2))
	{
		puts("strncmp(to_test, tested, 2) != mini_strncmp(to_test, tested, 2)");
		mini_print_clean_memory(to_test, 20, "to_test");
		mini_print_clean_memory(tested, 20, "tested");
		return (free(to_test), free(tested), 1);
	}
	return (free(to_test), free(tested), 0);
}
