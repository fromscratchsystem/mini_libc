#include "mini_libc.h"

int	mini_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\f' || c == '\n' || c == '\r' ||
		c == '\v')
		return (1);
	return (0);
}
