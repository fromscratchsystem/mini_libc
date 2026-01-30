#include "mini_libc.h"

void	mini_bzero(void *dest, size_t n)
{
	size_t	i;

	if (!dest)
		return ;
	i = 0;
	while (i < n)
	{
		*(unsigned char *) (dest + i) = '\0';
		i++;
	}
}
