#include "test_mini_libc.h"

int	test_mini_memccpy_base(void)
{
	char	*to_test;
	char	*tested;
	char	*src;
	void	*ret_to_test;
	void	*ret_tested;

	src = mini_strdup("Hello");
	if (!src)
		return (1);
	to_test = malloc(mini_strlen(src) + 1);
	if (!to_test)
		return (free(src), 1);
	mini_memset(to_test, 0, mini_strlen(src) + 1);
	tested = malloc(mini_strlen(src) + 1);
	if (!tested)
		return (free(src), free(to_test), 1);
	mini_memset(tested, 0, mini_strlen(src) + 1);
	ret_to_test = mini_memccpy(to_test, src, 'e', mini_strlen(src));
	ret_tested = memccpy(tested, src, 'e', mini_strlen(src));
	if (!ret_to_test && ret_tested)
	{
		puterror("Error: ret_to_test != ret_tested");
		puterror("ret_to_test: (null)");
		mini_print_clean_memory_fd(2, ret_tested, 4, "ret_tested");
		return (free(src), free(to_test), free(tested), 1);
	}
	if (mini_strcmp(tested, to_test) != 0)
	{
		puterror("Error: to_test != tested");
		mini_print_clean_memory_fd(2, to_test, mini_strlen(src) + 1, "to_test");
		mini_print_clean_memory_fd(2, tested, mini_strlen(src) + 1, "tested");
		puterror("need to match");
		return (free(src), free(to_test), free(tested), 1);
	}
	return (free(src), free(to_test), free(tested), 0);
}

