#include "test_mini_libc.h"

int	test_mini_isalpha_base(void)
{
	if (isalpha('0') != mini_isalpha('0'))
	{
		printf("isalpha(\'0\') = %d\n", isalpha('0'));
		printf("mini_isalpha(\'0\') = %d\n", mini_isalpha('0'));
		puts("It does not match");
		return (1);
	}
	if (isalpha('a') != mini_isalpha('a'))
	{
		printf("isalpha(\'a\') = %d\n", isalpha('a'));
		printf("mini_isalpha(\'a\') = %d\n", mini_isalpha('a'));
		puts("It does not match");
		return (1);
	}
	if (isalpha('b') != mini_isalpha('b'))
	{
		printf("isalpha(\'b\') = %d\n", isalpha('b'));
		printf("mini_isalpha(\'b\') = %d\n", mini_isalpha('b'));
		puts("It does not match");
		return (1);
	}
	if (isalpha('Z') != mini_isalpha('Z'))
	{
		printf("isalpha(\'Z\') = %d\n", isalpha('Z'));
		printf("mini_isalpha(\'Z\') = %d\n", mini_isalpha('Z'));
		puts("It does not match");
		return (1);
	}
	return (0);
}
