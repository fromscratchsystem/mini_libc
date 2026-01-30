#include "mini_libc.h"

void	mini_putendl(const char *str)
{
	mini_putstr(str);
	mini_putstr("\n");
}
