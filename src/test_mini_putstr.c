#include "test_mini_libc.h"

void	test_mini_putstr_base(void)
{
	puts("test mini_putstr : read manually no differences");
	write(1,"test = ", 8);
	mini_putstr("test");
	printf("\n");
}
