#include "mini_libc.h"

void	*mini_memchr(const void *src, int c, size_t n)
{
	size_t		i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) src;
	while (i < n)
	{
		if (*(ptr + i) == c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
