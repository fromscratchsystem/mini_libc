#include "mini_libc.h"

void	mini_print_memory_fd(int fd, const void *mem, size_t n)
{
	unsigned char	*ptr;
	size_t		i;

	ptr = (unsigned char *) mem;
	i = 0;
	print_address_fd(fd, mem);
	mini_putchar_fd(fd, '\t');
	while (i < n)
	{
		print_uchar_to_hex_fd(fd, *(ptr + i));
		if (i + 1 != n)
			mini_putchar_fd(fd, ' ');
		i++;
	}
}

void	mini_putstr_fd(int fd, const char *str)
{
	int	i;

	i = 0;
	if (fd == -1)
		return ;
	while (str[i])
		i++;
	write(fd, str, i);
}

void	mini_putchar_fd(int fd, char c)
{
	if (fd != -1)
		write(fd, &c, 1);
}

void	mini_print_memory(const void *mem, size_t n)
{
	mini_print_memory_fd(1, mem, n);
}

void	mini_print_clean_memory_fd(int fd, const void *mem, size_t n, char *var)
{
	if (var)
	{
		mini_putstr_fd(fd, var);
		mini_putchar_fd(fd, '\n');
	}
	mini_print_memory_fd(fd, mem, n);
	mini_putchar_fd(fd, '\n');
}

void	mini_print_clean_memory(const void *mem, size_t n, char *var)
{
	mini_print_clean_memory_fd(1, mem, n, var);
}

void	print_uchar_to_hex_fd(int fd, unsigned char c)
{
	char	digits[17];

	mini_strcpy(digits, "0123456789abcdef");
	mini_putchar_fd(fd, digits[c / 16]);
	mini_putchar_fd(fd, digits[c % 16]);
}

void	print_address_fd(int fd, const void *address)
{
	unsigned long	num;
	char		digits[17];

	num = (long) address;
	mini_strcpy(digits, "0123456789abcdef");
	print_uhex_fd(fd, num, 0xffffffffffffffffL, 0, digits);
}

void	print_uhex_fd(int fd, unsigned long n, unsigned long max, int zero,
	char *digits)
{
	if (n == 0xffffffffffffffffL)
	{
		mini_putstr_fd(fd, "ffffffffffffffff");
		return ;
	}
	if (n > 15)
		print_uhex_fd(fd, n / 16, max / 16, 0, digits);
	else if (max > 15)
		print_uhex_fd(fd, n, max / 16, 1, digits);
	if (zero)
	{
		mini_putstr_fd(fd, "0");
		return ;
	}
	mini_putchar_fd(fd, digits[n % 16]);
}
