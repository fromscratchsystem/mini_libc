#include "mini_libc.h"

void	mini_putstr(const char *str)
{
	if (str)
		write(1, str, mini_strlen(str));
}
