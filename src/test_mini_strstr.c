#include "test_mini_libc.h"

int	test_mini_strstr_base(void)
{
	char	*str;
	char	*substr_to_test;
	char	*substr_tested;

	str = malloc(20);
	if (!str)
		return (1);
	strncpy(str, "strrrrsss", 20);
	substr_to_test = mini_strstr(str, "tr");
	substr_tested = strstr(str, "tr");
	if (!substr_tested != !substr_to_test)
	{
		puterror(str);
		if (!substr_tested)
			puterror("tr found but does not exists");
		if (!substr_to_test)
			puterror("tr not found but exists");
	}
	if (strcmp(substr_to_test, substr_tested) != 0)
	{
		puterror("substr_tested != substr_to_test");
		dprintf(2, "strcmp(substr_to_test, substr_tested) = %d\n",
			strcmp(substr_to_test, substr_tested));
		mini_print_clean_memory_fd(2, substr_to_test, 5, "substr_to_test");
		mini_print_clean_memory_fd(2, substr_tested, 5, "substr_tested");
		puterror("memory does not matches");
		return (free(str), 1);
	}
	return (free(str), 0);
}
