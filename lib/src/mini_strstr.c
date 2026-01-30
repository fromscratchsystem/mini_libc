#include "mini_libc.h"

char	*mini_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len_s1;
	size_t	len_s2;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = mini_strlen(s1);
	len_s2 = mini_strlen(s2);
	if (len_s1 < len_s2)
		return (NULL);
	while (i < len_s1)
	{
		j = 0;
		if (i + len_s2 < len_s1)
		{
			while (j < len_s2 && s1[i + j] == s2[j])
				j++;
			if (j == len_s2)
				return ((char *)(s1 + i));
		}
		else
			return (NULL);
		i++;
	}
	return (NULL);
}
