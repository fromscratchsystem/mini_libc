#include "test_mini_libc.h"

int	test_mini_strncat_base(void)
{
	char	*to_test;
	char	*tested;
	char	*ptr_to_test;
	char	*ptr_tested;

	to_test = malloc(20);
	if (!to_test)
		return (1);
	tested = malloc(20);
	if (!tested)
		return (free(to_test), 1);
	bzero(to_test, 20);
	bzero(tested, 20);
	ptr_to_test = mini_strncat(to_test, "Hello World!", 5);
	ptr_tested = strncat(tested, "Hello World!", 5);
	if (strcmp(ptr_to_test, ptr_tested) != 0)
	{
		puterror("strncat (null) \"Hello World!\" size 5 failed");
		mini_print_clean_memory_fd(2, ptr_to_test, 20, "to_test");
		mini_print_clean_memory_fd(2, ptr_tested, 20, "tested");
		puterror("need to match");
		return (free(to_test), free(tested), 1);
	}
	ptr_to_test = mini_strncat(to_test, " World!", 6);
	ptr_tested = strncat(tested, " World!", 6);
	if (strcmp(ptr_to_test, ptr_tested) != 0)
	{
		puterror("strncat \"Hello\" \" World!\" size 6 failed");
		mini_print_clean_memory_fd(2, ptr_to_test, 20, "to_test");
		mini_print_clean_memory_fd(2, ptr_tested, 20, "tested");
		puterror("need to match");
		return (free(to_test), free(tested), 1);
	}
	char dest[8] = "Hi";
	char dest_tested[8] = "Hi";
	char src[] = "A";
	if (strcmp(mini_strncat(dest, src, 6), strncat(dest_tested, src, 6)))
	{
		puterror("strncat when size > strlen(src) failed");
		mini_print_clean_memory_fd(2, dest, 8, "to_test");
		mini_print_clean_memory_fd(2, dest_tested, 8, "tested");
		return (free(to_test), free(tested), 1);
	}
	return (free(to_test), free(tested), 0);
}
