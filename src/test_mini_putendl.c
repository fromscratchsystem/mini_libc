#include "test_mini_libc.h"

void	test_mini_putendl_base(void)
{
	puts("test mini_putendl check manually");
	puts("hello");
	mini_putendl("hello");
	puts("");
	mini_putendl("");
	puts("---");
	mini_putendl("---");
}
