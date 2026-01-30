#include "test_mini_libc.h"

int	test_mini_strlen_base(void)
{
	char	*str = "";
	if (mini_strlen(str) != 0)
		return (1);
	str = 0;
	if (mini_strlen(str) != 0)
		return (1);
	char	str2[20] = "test";
	if (mini_strlen(str2) != 4)
		return (1);
	return (0);
}
