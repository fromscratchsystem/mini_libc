#include "test_mini_libc.h"

void	test_mini_putnbr_base(void)
{
	int	nb;

	nb = 0x7fffffff;
	mini_putnbr(nb);
	mini_putchar('\n');
	printf("%d\n", nb);
	nb = 0x80000000;
	mini_putnbr(nb);
	mini_putchar('\n');
	printf("%d\n", nb);
	nb = -42;
	mini_putnbr(nb);
	mini_putchar('\n');
	printf("%d\n", nb);
	nb = 42;
	mini_putnbr(nb);
	mini_putchar('\n');
	printf("%d\n", nb);
}
