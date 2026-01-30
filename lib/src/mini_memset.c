#include "mini_libc.h"

void	*mini_memset(void *dest, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest)
		return (NULL);
	while (i < n)
	{
		*(unsigned char*) (dest + i) = (unsigned char) c;
		i++;
	}
	return (dest);
}
