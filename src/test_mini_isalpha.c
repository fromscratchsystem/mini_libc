#include "test_mini_libc.h"

int	test_mini_isalpha_base(void)
{
	if (isalpha('0') != mini_isalpha('0'))
	{
		dprintf(2, "isalpha(\'0\') = %d\n", isalpha('0'));
		dprintf(2, "mini_isalpha(\'0\') = %d\n", mini_isalpha('0'));
		puterror("It does not match");
		return (1);
	}
	if ((!!isalpha('a')) != (!!mini_isalpha('a')))
	{
		dprintf(2, "isalpha(\'a\') = %d\n", isalpha('a'));
		dprintf(2, "mini_isalpha(\'a\') = %d\n", mini_isalpha('a'));
		puterror("It does not match");
		return (1);
	}
	if ((!!isalpha('b')) != (!!mini_isalpha('b')))
	{
		dprintf(2, "isalpha(\'b\') = %d\n", isalpha('b'));
		dprintf(2, "mini_isalpha(\'b\') = %d\n", mini_isalpha('b'));
		puterror("It does not match");
		return (1);
	}
	if ((!!isalpha('Z')) != (!!mini_isalpha('Z')))
	{
		dprintf(2, "isalpha(\'Z\') = %d\n", isalpha('Z'));
		dprintf(2, "mini_isalpha(\'Z\') = %d\n", mini_isalpha('Z'));
		puterror("It does not match");
		return (1);
	}
	return (0);
}
