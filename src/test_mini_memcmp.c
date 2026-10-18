#include "test_mini_libc.h"

int	test_mini_memcmp_base(void)
{
	char	*s1;
	char	*s2;

	s1 = malloc(20);
	if (!s1)
		return (1);
	s2 = malloc(20);
	if (!s2)
		return (free(s1), 1);
	memset(s1, 0, 20);
	memset(s2, 0, 20);
	memset(s1, 'a', 10);
	memset(s2, 'a', 10);
	if (memcmp(s1, s2, 20) != mini_memcmp(s1, s2, 20))
	{
		dprintf(2, "s1 = %s\ns2 = %s\n", s1, s2);
		dprintf(2, "memcmp(s1,s2,20) = %d\nmini_memcmp(s1,s2,20) = %d)",
			memcmp(s1, s2, 20), mini_memcmp(s1, s2, 20));
		return (free(s1), free(s2), 1);
	}
	memset((s2 + 4), 'b', 3);
	if (memcmp(s1, s2, 20) != mini_memcmp(s1, s2, 20))
		return (free(s1), free(s2), 1);
	return (free(s1), free(s2), 0);
}
