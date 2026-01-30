#include "test_mini_libc.h"

int	test_mini_bzero_base(void)
{
	char	*to_test;
	char	*tested;

	to_test = malloc(20);
	if (!to_test)
		return (1);
	mini_bzero(to_test, 20);
	tested = calloc(1, 20);
	if (!tested)
		return (free(to_test), 1);
	if (memcmp(to_test, tested, 20) != 0)
	{
		mini_print_clean_memory(to_test, 20, "to_test");
		mini_print_clean_memory(tested, 20, "tested");
		mini_putendl("memory does not matches");
		return (free(to_test), free(tested), 1);
	}
	memset(to_test, 'a', 5);
	memset(tested, 'a', 5);
	mini_bzero(to_test, 0);
	bzero(tested, 0);
	if (memcmp(to_test, tested, 20) != 0)
	{
		mini_print_clean_memory(to_test, 20, "to_test");
		mini_print_clean_memory(tested, 20, "tested");
		mini_putendl("memory does not matches");
		return (free(to_test), free(tested), 1);
	}
	mini_bzero(to_test, 2);
	bzero(tested, 2);
	if (memcmp(to_test, tested, 20) != 0)
	{
		mini_print_clean_memory(to_test, 20, "to_test");
		mini_print_clean_memory(tested, 20, "tested");
		mini_putendl("memory does not matches");
		return (free(to_test), free(tested), 1);
	}
	return (free(to_test), free(tested), 0);
}
