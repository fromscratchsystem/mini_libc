#include "test_mini_libc.h"

int	test_mini_strcpy_base(void)
{
	char	*to_test;
	char	*tested;

	to_test = malloc(20);
	if (!to_test)
		return (1);
	mini_strcpy(to_test, "Hello World!");
	tested = malloc(20);
	if (!tested)
		return (free(to_test), 1);
	strcpy(tested, "Hello World!");
	if (strcmp(to_test, tested) != 0)
		return (free(to_test), free(tested), 1);
	mini_strcpy(to_test, "");
	strcpy(tested, "");
	if (strcmp(to_test, tested) != 0)
		return (free(to_test), free(tested), 1);
	return (free(to_test), free(tested), 0);
}
