#include "mini_libc.h"

char	*mini_strrchr(const char *str, int c)
{
	return (mini_memrchr(str, c, mini_strlen(str)));
}
