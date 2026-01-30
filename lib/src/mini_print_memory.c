#include "mini_libc.h"

void	mini_print_memory(const void *mem, size_t n)
{
	unsigned char	*ptr;
	size_t		i;

	ptr = (unsigned char *) mem;
	i = 0;
	print_address(mem);
	mini_putchar('\t');
	while (i < n)
	{
		print_uchar_to_hex(*(ptr + i));
		if (i + 1 != n)
			mini_putchar(' ');
		i++;
	}
}

void	mini_print_clean_memory(const void *mem, size_t n, char *var)
{
	if (var)
	{
		mini_putstr(var);
		mini_putchar('\n');
	}
	mini_print_memory(mem, n);
	mini_putchar('\n');
}

void	print_uchar_to_hex(unsigned char c)
{
	char	digits[17];

	mini_strcpy(digits, "0123456789abcdef");
	mini_putchar(digits[c / 16]);
	mini_putchar(digits[c % 16]);
}

void	print_address(const void *address)
{
	unsigned long	num;
	char		digits[17];

	num = (long) address;
	mini_strcpy(digits, "0123456789abcdef");
	print_uhex(num, 0xffffffffffffffffL, 0, digits);
}

void	print_uhex(unsigned long n, unsigned long max, int zero,
	char *digits)
{
	if (n == 0xffffffffffffffffL)
	{
		mini_putstr("ffffffffffffffff");
		return ;
	}
	if (n > 15)
		print_uhex(n / 16, max / 16, 0, digits);
	else if (max > 15)
		print_uhex(n, max / 16, 1, digits);
	if (zero)
	{
		mini_putstr("0");
		return ;
	}
	mini_putchar(digits[n % 16]);
}
