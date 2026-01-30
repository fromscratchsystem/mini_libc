#include "test_mini_libc.h"

int	test_mini_strndup_base(void)
{
	char	*to_test;
	char	*tested;

	to_test = mini_strndup("Hello World!", 5);
	tested = strndup("Hello World!", 5);
	if (!to_test != !tested)
	{
		if (!to_test)
		{
			puts("mini_strndup(\"Hello World!\", 5) failed");
			mini_print_clean_memory(tested, 6, "tested");
			return (free(tested), 1);
		}
		else
		{
			puts("mini_strndup(\"Hello World!\", 5) returns something but may not");
			return (free(to_test), 1);
		}
	}
	if (strcmp(to_test, tested) != 0)
	{
		puts("simple strndup failed");
		mini_print_clean_memory(to_test, mini_strlen(to_test), "to_test");
		mini_print_clean_memory(tested, mini_strlen(tested), "tested");
		return (free(to_test), free(tested), 1);
	}
	return (free(to_test), free(tested), 0);
}
