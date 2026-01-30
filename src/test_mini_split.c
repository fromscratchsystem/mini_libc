#include "test_mini_libc.h"

int	test_mini_split_base(void)
{
	char	**to_test;
	size_t	wc;

	to_test = mini_split("Hello World! ", ' ');
	if (!to_test)
	{
		puts("mini_split(\"Hello World! \", ' ') returns NULL");
		return (1);
	}
	wc = mini_word_count("Hello World! ", ' ') + 1;
	if (strcmp(to_test[0], "Hello") != 0)
	{
		puts("mini_split(\"Hello World! \", ' ')");
		puts("to_test[0] does not equal \"Hello\"");
		printf("It is equal \"%s\"\n", to_test[0]);
		return (mini_free_double_array((void **)to_test, wc), 1);
	}
	if (strcmp(to_test[1], "World!") != 0)
	{
		puts("mini_split(\"Hello World! \", ' ')");
		puts("to_test[1] does not equal \"World!\"");
		printf("It is equal \"%s\"\n", to_test[1]);
		return (mini_free_double_array((void **)to_test, wc), 1);
	}
	if (to_test[2])
	{
		puts("mini_split(\"Hello World! \", ' ')");
		puts("to_test[2] does not equal NULL");
		printf("It is equal \"%s\"\n", to_test[2]);
		return (mini_free_double_array((void **)to_test, wc), 1);
	}
	return (mini_free_double_array((void **)to_test, wc), 0);
}
