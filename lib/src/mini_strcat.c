#include "mini_libc.h"

char	*mini_strcat(char *dest, const char *src)
{
	char	*start;

	if (!dest)
		return (NULL);
	if (!src)
		return (dest);
	start = dest;
	mini_strcpy((dest + mini_strlen(dest)), src);
	return (start);
}
