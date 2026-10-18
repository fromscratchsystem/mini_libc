#include "test_mini_libc.h"

int	test_mini_substr_base(void)
{
	char	*substr;

	substr = mini_substr("Hello World!", 6, 5);
	if (strcmp(substr, "World") != 0)
	{
		puterror("mini_substr(\"Hello World\", 6, 5) failed");
		dprintf(2, "substr = %s\n", substr);
		puterror("does not equal to \"World\"");
		return (free(substr), 1);
	}
	free(substr);
	substr = mini_substr("Hello World!", 0, 5);
	if (strcmp(substr, "Hello") != 0)
	{
		puterror("mini_substr(\"Hello World\", 0, 5) failed");
		dprintf(2, "substr = %s\n", substr);
		puterror("does not equal to \"Hello\"");
		return (free(substr), 1);
	}
	free(substr);
	substr = mini_substr("Hello World!", 100, 5);
	if (substr)
	{
		puterror("mini_substr start out of bounds failed");
		puterror(substr);
		return (free(substr), 1);
	}
	return (free(substr), 0);
}
