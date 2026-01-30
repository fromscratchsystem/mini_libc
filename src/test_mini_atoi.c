#include "test_mini_libc.h"

int	test_mini_atoi_base(void)
{
	if (mini_atoi("423") != atoi("423"))
	{
		printf("mini_atoi(\"423\") = %d\n", mini_atoi("423"));
		return (1);
	}
	if (mini_atoi("-423") != atoi("-423"))
	{
		printf("mini_atoi(\"-423\") = %d\n", mini_atoi("-423"));
		return (1);
	}
	if (mini_atoi("-2147483648") != atoi("-2147483648"))
	{
		printf("mini_atoi(\"-2147483648\") = %d\n", mini_atoi("-2147483648"));
		return (1);
	}
	if (mini_atoi("-2147483647") != atoi("-2147483647"))
	{
		printf("mini_atoi(\"-2147483647\") = %d\n", mini_atoi("-2147483647"));
		return (1);
	}
	if (mini_atoi("2147483647") != atoi("2147483647"))
	{
		printf("mini_atoi(\"2147483647\") = %d\n", mini_atoi("2147483647"));
		return (1);
	}
	return (0);
}
