#include "test_mini_libc.h"


int	test_mini_memmove_base(void)
{
	char	*to_test;
	char	*tested;
	char	*cpy;

	to_test = malloc(20);
	if (!to_test)
		return (1);
	strcpy(to_test, "0000011111000001111");
	mini_memmove(to_test, (to_test + 4), 8);
	tested = malloc(20);
	if (!tested)
		return (free(to_test), 1);
	strcpy(tested, "0000011111000001111");
	memmove(tested, (tested + 4), 8);
	if (memcmp(to_test, tested, 20) != 0)
		return (free(to_test), free(tested), 1);
	memmove(tested, (tested + 4), 0);
	mini_memmove(to_test, (to_test + 4), 0);
	if (memcmp(to_test, tested, 20) != 0)
		return (free(to_test), free(tested), 1);
	cpy = malloc(20);
	if (!cpy)
		return (free(to_test), free(tested), 1);
	mini_memmove(cpy, tested, 20);
	if (memcmp(cpy, tested, 20) != 0)
		return (free(to_test), free(tested), free(cpy), 1);
	return (free(to_test), free(tested), free(cpy), 0);
}
