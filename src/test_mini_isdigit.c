#include "test_mini_libc.h"

int	test_mini_isdigit_base(void)
{
	if (isdigit('c') != mini_isdigit('c'))
	{
		printf("isdigit(\'c\') = %d\n", isdigit('c'));
		printf("mini_isdigit(\'c\') = %d\n", mini_isdigit('c'));
		return (1);
	}
	if (isdigit('0') != mini_isdigit('0'))
	{
		printf("isdigit(\'0\') = %d\n", isdigit('0'));
		printf("mini_isdigit(\'0\') = %d\n", mini_isdigit('0'));
		return (1);
	}
	return (0);
}
