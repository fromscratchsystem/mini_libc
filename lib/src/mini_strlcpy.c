#include "mini_libc.h"

size_t	mini_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!src)
		return (0);
	if (size == 0)
		return (mini_strlen(src) + 1);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (mini_strlen(src));
}
