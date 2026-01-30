#include "mini_libc.h"
#include <stdio.h>

int	mini_memcmp(const void *s1, const void *s2, size_t n)
{
	int		res;
	size_t		i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	res = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (i < n)
	{
		res = p1[i] - p2[i];
		i++;
		if (res != 0)
			break ;
	}
	return (res);
}
