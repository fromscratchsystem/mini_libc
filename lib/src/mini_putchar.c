#include "mini_libc.h"

void	mini_putchar(char c)
{
	write(1, &c, 1);
}
