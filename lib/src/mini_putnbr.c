#include "mini_libc.h"

void	mini_putnbr(int n)
{
	if (n == -2147483648)
	{
		mini_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		n = -n;
		mini_putchar('-');
	}
	if (n > 9)
		mini_putnbr(n / 10);
	mini_putchar('0' + n % 10);
}
