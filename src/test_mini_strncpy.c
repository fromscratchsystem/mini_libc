#include "test_mini_libc.h"

int	test_mini_strncpy_base(void)
{
	char	*to_test;
	char	*tested;

	to_test = malloc(20);
	if (!to_test)
		return (1);
	memset(to_test, 'a', 20);
	mini_strncpy(to_test, "Hello", 20);
	tested = malloc(20);
	if (!tested)
		return (free(to_test), 1);
	memset(tested, 'a', 20);
	strncpy(tested, "Hello", 20);
	if (memcmp(to_test, tested, 20) != 0)
	{
		dprintf(2, "tested = %s\n", tested);
		dprintf(2, "to_test = %s\n", to_test);
		puterror("Does not match");
		return (free(to_test), free(tested), 1);
	}
	return (free(to_test), free(tested), 0);
}
