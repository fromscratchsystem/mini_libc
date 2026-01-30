#include "test_mini_libc.h"

int	test_mini_isalnum_base(void)
{
	if (mini_isalnum('a') != isalnum('a'))
	{
		printf("mini_isalnum(\'a\') = %d\n", mini_isalnum('a'));
		printf("isalnum(\'a\') = %d\n", isalnum('a'));
		puts("It does not match");
		return (1);
	}
	if (mini_isalnum('0') != isalnum('0'))
	{
		printf("mini_isalnum(\'0\') = %d\n", mini_isalnum('0'));
		printf("isalnum(\'0\') = %d\n", isalnum('0'));
		puts("It does not match");
		return (1);
	}
	if (mini_isalnum('A') != isalnum('A'))
	{
		printf("mini_isalnum(\'A\') = %d\n", mini_isalnum('A'));
		printf("isalnum(\'A\') = %d\n", isalnum('A'));
		puts("It does not match");
		return (1);
	}
	if (mini_isalnum('z') != isalnum('z'))
	{
		printf("mini_isalnum(\'z\') = %d\n", mini_isalnum('z'));
		printf("isalnum(\'z\') = %d\n", isalnum('z'));
		puts("It does not match");
		return (1);
	}
	if (mini_isalnum('Z') != isalnum('Z'))
	{
		printf("mini_isalnum(\'Z\') = %d\n", mini_isalnum('Z'));
		printf("isalnum(\'Z\') = %d\n", isalnum('Z'));
		puts("It does not match");
		return (1);
	}
	if (mini_isalnum('a') != isalnum('a'))
	{
		printf("mini_isalnum(\'a\') = %d\n", mini_isalnum('a'));
		printf("isalnum(\'a\') = %d\n", isalnum('a'));
		puts("It does not match");
		return (1);
	}
	if (mini_isalnum('b') != isalnum('b'))
	{
		printf("mini_isalnum(\'b\') = %d\n", mini_isalnum('b'));
		printf("isalnum(\'b\') = %d\n", isalnum('b'));
		puts("It does not match");
		return (1);
	}
	if (mini_isalnum('B') != isalnum('B'))
	{
		printf("mini_isalnum(\'B\') = %d\n", mini_isalnum('B'));
		printf("isalnum(\'B\') = %d\n", isalnum('B'));
		puts("It does not match");
		return (1);
	}
	return (0);
}
