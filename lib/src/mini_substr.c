#include "mini_libc.h"

char	*mini_substr(const char *str, unsigned int start, size_t len)
{
	if (start > (unsigned int) mini_strlen(str))
		return (NULL);
	char	*res = mini_strndup((str + start), len);
	return (res);
}
