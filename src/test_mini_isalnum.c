#include "test_mini_libc.h"

int	test_mini_isalnum_base(void)
{
	if ((!!mini_isalnum('a')) != (!!isalnum('a')))
	{
		dprintf(2, "mini_isalnum(\'a\') = %d\n", mini_isalnum('a'));
		dprintf(2, "isalnum(\'a\') = %d\n", isalnum('a'));
		puterror("It does not match");
		return (1);
	}
	if ((!!mini_isalnum('0')) != (!!isalnum('0')))
	{
		dprintf(2, "mini_isalnum(\'0\') = %d\n", mini_isalnum('0'));
		dprintf(2, "isalnum(\'0\') = %d\n", isalnum('0'));
		puterror("It does not match");
		return (1);
	}
	if ((!!mini_isalnum('A')) != (!!isalnum('A')))
	{
		dprintf(2, "mini_isalnum(\'A\') = %d\n", mini_isalnum('A'));
		dprintf(2, "isalnum(\'A\') = %d\n", isalnum('A'));
		puterror("It does not match");
		return (1);
	}
	if ((!!mini_isalnum('z')) != (!!isalnum('z')))
	{
		dprintf(2, "mini_isalnum(\'z\') = %d\n", mini_isalnum('z'));
		dprintf(2, "isalnum(\'z\') = %d\n", isalnum('z'));
		puterror("It does not match");
		return (1);
	}
	if ((!!mini_isalnum('Z')) != (!!isalnum('Z')))
	{
		dprintf(2, "mini_isalnum(\'Z\') = %d\n", mini_isalnum('Z'));
		dprintf(2, "isalnum(\'Z\') = %d\n", isalnum('Z'));
		puterror("It does not match");
		return (1);
	}
	if ((!!mini_isalnum('a')) != (!!isalnum('a')))
	{
		dprintf(2, "mini_isalnum(\'a\') = %d\n", mini_isalnum('a'));
		dprintf(2, "isalnum(\'a\') = %d\n", isalnum('a'));
		puterror("It does not match");
		return (1);
	}
	if ((!!mini_isalnum('b')) != (!!isalnum('b')))
	{
		dprintf(2, "mini_isalnum(\'b\') = %d\n", mini_isalnum('b'));
		dprintf(2, "isalnum(\'b\') = %d\n", isalnum('b'));
		puterror("It does not match");
		return (1);
	}
	if ((!!mini_isalnum('B')) != (!!isalnum('B')))
	{
		dprintf(2, "mini_isalnum(\'B\') = %d\n", mini_isalnum('B'));
		dprintf(2, "isalnum(\'B\') = %d\n", isalnum('B'));
		puterror("It does not match");
		return (1);
	}
	return (0);
}
