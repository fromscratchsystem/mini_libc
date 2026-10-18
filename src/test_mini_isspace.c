#include "test_mini_libc.h"

int	test_mini_isspace_base(void)
{
	if ((!!isspace(' ')) != (!!mini_isspace(' ')))
	{
		dprintf(2, "mini_isspace(\' \') = %d\n", mini_isspace(' '));
		dprintf(2, "isspace(\' \') = %d\n", isspace(' '));
		puterror("It does not match");
		return (1);
	}
	if ((!!isspace('j')) != (!!mini_isspace('j')))
	{
		dprintf(2, "mini_isspace(\'j\') = %d\n", mini_isspace('j'));
		dprintf(2, "isspace(\'j\') = %d\n", isspace('j'));
		puterror("It does not match");
		return (1);
	}
	if ((!!isspace('\t')) != (!!mini_isspace('\t')))
	{
		dprintf(2, "mini_isspace(\'\\t\') = %d\n", mini_isspace('\t'));
		dprintf(2, "isspace(\'\\t\') = %d\n", isspace('\t'));
		puterror("It does not match");
		return (1);
	}
	if ((!!isspace('\f')) != (!!mini_isspace('\f')))
	{
		dprintf(2, "mini_isspace(\'\\f\') = %d\n", mini_isspace('\f'));
		dprintf(2, "isspace(\'\\f\') = %d\n", isspace('\f'));
		puterror("It does not match");
		return (1);
	}
	if ((!!isspace('\n')) != (!!mini_isspace('\n')))
	{
		dprintf(2, "mini_isspace(\'\\n\') = %d\n", mini_isspace('\n'));
		dprintf(2, "isspace(\'\\n\') = %d\n", isspace('\n'));
		puterror("It does not match");
		return (1);
	}
	if ((!!isspace('\r')) != (!!mini_isspace('\r')))
	{
		dprintf(2, "mini_isspace(\'\\r\') = %d\n", mini_isspace('\r'));
		dprintf(2, "isspace(\'\\r\') = %d\n", isspace('\r'));
		puterror("It does not match");
		return (1);
	}
	if ((!!isspace('\v')) != (!!mini_isspace('\v')))
	{
		dprintf(2, "mini_isspace(\'\\v\') = %d\n", mini_isspace('\v'));
		dprintf(2, "isspace(\'\\v\') = %d\n", isspace('\v'));
		puterror("It does not match");
		return (1);
	}
	return (0);
}
