#include "mini_libc.h"

void	*mini_memrchr(const void *src, int c, size_t n)
{
	unsigned char	*ptr;

	if (!src)
		return (NULL);
	ptr = (unsigned char *) src;
	while (n > 0)
	{
		if (ptr[n - 1] == c)
			return ((ptr + n - 1));
		n--;
	}
	return (NULL);
}
