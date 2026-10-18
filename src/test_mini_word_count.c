#include "test_mini_libc.h"

int	test_mini_word_count_base(void)
{
	if (mini_word_count(";;;;;;;;;", ';') != 0)
	{
		puterror("full sep test failed");
		dprintf(2, "mini_word_count(\";;;;;;;;;\", ';') != 0\n%zu\n",
			mini_word_count(";;;;;;;;;", ';'));
		return (1);
	}
	if (mini_word_count("Hello;World", ';') != 2)
	{
		puterror("Hello;World sep ; failed");
		dprintf(2, "mini_word_count(\"Hello;World\", ';') != 2\n%zu\n",
			mini_word_count("Hello;World", ';'));
		return (1);
	}
	if (mini_word_count("Hello;;;;;", ';') != 1)
	{
		puterror("Hello;;;;; sep ; failed");
		dprintf(2, "mini_word_count(\"Hello;;;;;\", ';') != 1\n%zu\n",
			mini_word_count("Hello;;;;;", ';'));
		return (1);
	}
	if (mini_word_count("Hello;;;;;World;;;", ';') != 2)
	{
		puterror("Hello;;;;;World;;; sep ; failed");
		dprintf(2, "mini_word_count(\"Hello;;;;;\", ';') != 2\n%zu\n",
			mini_word_count("Hello;;;;;", ';'));
		return (1);
	}
	return (0);
}
