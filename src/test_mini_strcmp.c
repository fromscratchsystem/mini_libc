#include "test_mini_libc.h"

int	test_mini_strcmp_base(void)
{
	char	*s1;
	char	*s2;

	s1 = malloc(20);
	if (!s1)
		return (1);
	memset(s1, 'a', 19);
	s1[19] = '\0';
	s2 = malloc(20);
	if (!s2)
		return (free(s1), 1);
	memset(s2, 'a', 19);
	s2[19] = '\0';
	if (strcmp(s1, s2) != mini_strcmp(s1, s2))
	{
		mini_putendl("s1");
		mini_print_memory(s1, 20);
		mini_putendl(NULL);
		mini_putendl("s2");
		mini_print_memory(s2, 20);
		mini_putendl(NULL);
		return (free(s1), free(s2), 1);
	}
	return (free(s1), free(s2), 0);
}
