#include "mini_libc.h"

char	*mini_strchr(const char *str, int c)
{
	return (mini_memchr(str, c, mini_strlen(str)));
}
