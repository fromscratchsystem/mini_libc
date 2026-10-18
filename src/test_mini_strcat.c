#include "test_mini_libc.h"

int	test_mini_strcat_base(void)
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
	mini_bzero(to_test, 20);
	mini_bzero(tested, 20);
	ptr_to_test = mini_strcat(to_test, "Hello");
	ptr_tested = strcat(tested, "Hello");
	if (strcmp(ptr_to_test, ptr_tested) != 0)
	{
		puterror("strcat (null) to \"Hello\" failed");
		mini_print_clean_memory_fd(2, ptr_to_test, 20, "to_test");
		mini_print_clean_memory_fd(2, ptr_tested, 20, "tested");
		puterror("need to match");
		return (free(to_test), free(tested), 1);
	}
	ptr_to_test = mini_strcat(to_test, " World!");
	ptr_tested = strcat(tested, " World!");
	if (strcmp(ptr_to_test, ptr_tested) != 0)
	{
		puterror("strcat \"Hello\" to \" World!\" failed");
		mini_print_clean_memory_fd(2, ptr_to_test, 20, "to_test");
		mini_print_clean_memory_fd(2, ptr_tested, 20, "tested");
		puterror("need to match");
		return (free(to_test), free(tested), 1);
	}
	ptr_to_test = mini_strcat(to_test, "");
	ptr_tested = strcat(tested, "");
	if (strcmp(to_test, tested) != 0)
	{
		puterror("strcat \"Hello World!\" to \"\" failed");
		mini_print_clean_memory_fd(2, ptr_to_test, 20, "to_test");
		mini_print_clean_memory_fd(2, ptr_tested, 20, "tested");
		puterror("need to match");
		return (free(to_test), free(tested), 1);
	}
	return (free(to_test), free(tested), 0);
}
