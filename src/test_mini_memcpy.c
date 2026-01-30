#include "test_mini_libc.h"

int	test_mini_memcpy_base(void)
{
	char	*str;
	char	*cpy;

	str = malloc(20);
	if (!str)
		return (1);
	strcpy(str, "hello");
	cpy = malloc(20);
	if (!cpy)
		return (free(str), 1);
	mini_memcpy(cpy, str, strlen(str) + 1);
	if (strcmp(cpy, str) != 0)
		return (free(str), free(cpy), 1);
	
	return (free(str), free(cpy), 0);
}
