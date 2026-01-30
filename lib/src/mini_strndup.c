#include "mini_libc.h"

char	*mini_strndup(const char *str, size_t n)
{
	char	*res;

	if (!str)
		return (NULL);
	res = malloc(n + 1);
	if (n > mini_strlen(str))
		return (NULL);
	if (!res)
		return (NULL);
	mini_memcpy(res, str, n);
	res[n] = '\0';
	return (res);
}
