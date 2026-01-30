#include "mini_libc.h"

void	mini_free_double_array(void **array, size_t size)
{
	while (size > 0)
	{
		free(array[size - 1]);
		size--;
	}
	free(array);
}
