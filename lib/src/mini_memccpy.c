#include "mini_libc.h"

void	*mini_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

	i = 0;
	s = src;
	d = dest;
	while (i < n && s[i] != c && s[i])
	{
		d[i] = s[i];
		i++;
	}
	if (s[i] == c)
	{
		d[i] = s[i];
		return (d + i);
	}
	return (NULL);
}
