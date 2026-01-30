#include "mini_libc.h"

unsigned int	mini_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	if (str)
	{
		while (str[len])
			len++;
	}
	return (len);
}
	
