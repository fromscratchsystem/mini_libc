#include "mini_libc.h"

int	mini_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	int	res;

	if (!s1 && s2)
		return (-s2[0]);
	else if (s1 && !s2)
		return (s1[0]);
	else if (!s1 && !s2)
		return (0);
	i = 0;
	res = 0;
	while (s1[i])
	{
		res = s1[i] - s2[i];
		if (res != 0)
			return (res);
		i++;
	}
	return (s1[i] - s2[i]);
}
