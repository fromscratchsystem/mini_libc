#include "test_mini_libc.h"

int	test_mini_strdup_base(void)
{
	char	*to_test;
	char	*tested;

	to_test = mini_strdup("toto");
	if (!to_test)
		return (1);
	tested = strdup("toto");
	if (!tested)
		return (free(to_test), 1);
	if (strcmp(to_test, tested) != 0)
	{
		puterror("simple strdup failed");
		mini_print_clean_memory_fd(2, to_test, mini_strlen(to_test) + 1, "to_test");
		mini_print_clean_memory_fd(2, tested, mini_strlen(tested) + 1, "tested");
		puterror("Need to match");
		return (free(to_test), free(tested), 1);
	}
	return (free(to_test), free(tested), 0);
}
