#include "mini_libc.h"

int	mini_isalnum(int c)
{
	if (mini_isalpha(c) || mini_isdigit(c))
		return (1);
	return (0);
}
