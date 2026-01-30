#include "test_mini_libc.h"

void	test_mini_print_memory_base(void)
{
	int	var;
	void	*ptr;

	var = 0;
	ptr = &var;
	mini_print_memory(ptr, 1);
	printf("\n%16p\n", ptr);
}
