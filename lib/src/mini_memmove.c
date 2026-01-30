#include "mini_libc.h"

void	*mini_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_cpy;
	
	src_cpy = malloc(n);
	if (!src_cpy)
		return (NULL);
	mini_memcpy(src_cpy, src, n);
	mini_memcpy(dest, src_cpy, n);
	return (free(src_cpy), dest);
}
