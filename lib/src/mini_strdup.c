#include "mini_libc.h"

char	*mini_strdup(const char *str)
{
	char	*res;
	size_t	len;

	if (!str)
		return (NULL);
	len = mini_strlen(str) + 1;
	res = malloc(len);
	return (mini_memcpy(res, str, len));
}
