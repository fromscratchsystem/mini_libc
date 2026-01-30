#include "mini_libc.h"

size_t	mini_word_count(const char *str, char sep)
{
	size_t	res;

	res = 0;
	if (!str)
		return (0);
	if (sep == 0)
	{
		if (*str)
			return (1);
		return (0);
	}
	while (*str)
	{
		while (*str == sep)
			str++;
		if (!*str)
			break ;
		while (*str != sep && *str)
			str++;
		res++;
	}
	return (res);
}
