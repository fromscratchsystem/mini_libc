#include "test_mini_libc.h"

int	test_mini_substr_base(void)
{
	char	*substr;

	substr = mini_substr("Hello World!", 6, 5);
	if (strcmp(substr, "World") != 0)
	{
		puts("mini_substr(\"Hello World\", 6, 5) failed");
		printf("substr = %s\n", substr);
		puts("does not equal to \"World\"");
		return (free(substr), 1);
	}
	free(substr);
	substr = mini_substr("Hello World!", 0, 5);
	if (strcmp(substr, "Hello") != 0)
	{
		puts("mini_substr(\"Hello World\", 0, 5) failed");
		printf("substr = %s\n", substr);
		puts("does not equal to \"Hello\"");
		return (free(substr), 1);
	}
	free(substr);
	substr = mini_substr("Hello World!", 100, 5);
	if (substr)
	{
		puts("mini_substr start out of bounds failed");
		puts(substr);
		return (free(substr), 1);
	}
	return (free(substr), 0);
}
