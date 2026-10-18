#include "test_mini_libc.h"

int	test_mini_isdigit_base(void)
{
	if ((!!isdigit('c')) != (!!mini_isdigit('c')))
	{
		dprintf(2, "isdigit(\'c\') = %d\n", isdigit('c'));
		dprintf(2, "mini_isdigit(\'c\') = %d\n", mini_isdigit('c'));
		return (1);
	}
	if ((!!isdigit('0')) != (!!mini_isdigit('0')))
	{
		dprintf(2, "isdigit(\'0\') = %d\n", isdigit('0'));
		dprintf(2, "mini_isdigit(\'0\') = %d\n", mini_isdigit('0'));
		return (1);
	}
	return (0);
}
