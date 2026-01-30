#include "test_mini_libc.h"

int	test_mini_strrchr_base(void)
{
	char	*str;
	char	*substr_to_test;
	char	*substr_tested;

	str = malloc(20);
	if (!str)
		return (1);
	strncpy(str, "strrrrsss", 20);
	substr_to_test = mini_strrchr(str, 'r');
	substr_tested = strrchr(str, 'r');
	if (strcmp(substr_to_test, substr_tested) != 0)
	{
		puts("substr_tested != substr_to_test");
		printf("strcmp(substr_to_test, substr_tested) = %d\n",
			strcmp(substr_to_test, substr_tested));
		mini_print_clean_memory(substr_to_test, 20, "substr_to_test");
		mini_print_clean_memory(substr_tested, 20, "substr_tested");
		mini_putendl("memory does not matches");
		return (free(str), 1);
	}
	return (free(str), 0);
}
