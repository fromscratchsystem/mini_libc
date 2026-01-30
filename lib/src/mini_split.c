#include "mini_libc.h"

char	**mini_split(const char *str, char sep)
{
	char	**res;
	char	*cursor;
	char	*cursor_s;
	size_t	i;

	res = malloc(sizeof(char *) * (mini_word_count(str, sep) + 1));
	cursor = (char *) str;
	if (!res)
		return (NULL);
	i = 0;
	while (1)
	{
		if (!cursor[0])
			break ;
		cursor_s = mini_strchr(cursor, sep);
		if (!cursor_s)
			break ;
		res[i] = mini_substr(cursor, 0, cursor_s - cursor);
		i++;
		cursor = cursor_s + 1;
	}
	res[mini_word_count(str, sep)] = NULL;
	return (res);
}
