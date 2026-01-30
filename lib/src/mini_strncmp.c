#include "mini_libc.h"

int	mini_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int	res;

	i = 0;
	res = 0;
	while (i < n && s1[i])
	{
		res = s1[i] - s2[i];
		if (res != 0)
			return (res);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (res);
}
