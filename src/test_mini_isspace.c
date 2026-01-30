#include "test_mini_libc.h"

int	test_mini_isspace_base(void)
{
	if (isspace(' ') != mini_isspace(' '))
	{
		printf("mini_isspace(\' \') = %d\n", mini_isspace(' '));
		printf("isspace(\' \') = %d\n", isspace(' '));
		puts("It does not match");
		return (1);
	}
	if (isspace('j') != mini_isspace('j'))
	{
		printf("mini_isspace(\'j\') = %d\n", mini_isspace('j'));
		printf("isspace(\'j\') = %d\n", isspace('j'));
		puts("It does not match");
		return (1);
	}
	if (isspace('\t') != mini_isspace('\t'))
	{
		printf("mini_isspace(\'\\t\') = %d\n", mini_isspace('\t'));
		printf("isspace(\'\\t\') = %d\n", isspace('\t'));
		puts("It does not match");
		return (1);
	}
	if (isspace('\f') != mini_isspace('\f'))
	{
		printf("mini_isspace(\'\\f\') = %d\n", mini_isspace('\f'));
		printf("isspace(\'\\f\') = %d\n", isspace('\f'));
		puts("It does not match");
		return (1);
	}
	if (isspace('\n') != mini_isspace('\n'))
	{
		printf("mini_isspace(\'\\n\') = %d\n", mini_isspace('\n'));
		printf("isspace(\'\\n\') = %d\n", isspace('\n'));
		puts("It does not match");
		return (1);
	}
	if (isspace('\r') != mini_isspace('\r'))
	{
		printf("mini_isspace(\'\\r\') = %d\n", mini_isspace('\r'));
		printf("isspace(\'\\r\') = %d\n", isspace('\r'));
		puts("It does not match");
		return (1);
	}
	if (isspace('\v') != mini_isspace('\v'))
	{
		printf("mini_isspace(\'\\v\') = %d\n", mini_isspace('\v'));
		printf("isspace(\'\\v\') = %d\n", isspace('\v'));
		puts("It does not match");
		return (1);
	}
	return (0);
}
