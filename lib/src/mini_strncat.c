#include "mini_libc.h"

char	*mini_strncat(char *dest, const char *src, size_t n)
{
	char	*start;
	if (!dest)
		return (NULL);
	if (!src)
		return (dest);
	start = dest;
	mini_strncpy((dest + mini_strlen(dest)), src, n);
	return (start);
}
