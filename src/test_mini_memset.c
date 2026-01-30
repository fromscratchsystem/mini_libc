#include "test_mini_libc.h"

int	test_mini_memset_base(void)
{
	char	*str;

	str = malloc(20);
	if (!str)
		return (1);
	mini_memset(str, 'a', 5);
	str[5] = 0;
	if (strcmp(str, "aaaaa") != 0)
		return (free(str), 1);
	mini_memset(str, 'z', 0);
	if (strcmp(str, "aaaaa") != 0)
		return (free(str), 1);
	mini_memset(str, 0, 1);
	if (strcmp(str, "") != 0)
		return (free(str), 1);
	return (free(str), 0);
}
