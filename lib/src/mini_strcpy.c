#include "mini_libc.h"

char	*mini_strcpy(char *dest, const char *src)
{
	int	len;

	if (!dest || !src)
		return (NULL);
	len = mini_strlen(src);
	mini_memcpy(dest, src, len);
	dest[len] = '\0';
	return (dest);
}
