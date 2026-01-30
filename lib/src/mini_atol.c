#include "mini_libc.h"

long	mini_atol(const char *str)
{
	int	sign;
	long	res;

	if (!str)
		return (0);
	if (mini_strcmp("-9223372036854775808", str) == 0)
		return ((long) 0x8000000000000000);
	sign = 1;
	res = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (mini_isdigit(*str))
	{
		if (res + *str - '0' <= 9223372036854775807)
			res += *str - '0';
		if (mini_isdigit(*(str + 1)) && res <= 922337203685477580L)
			res *= 10;
		str++;
	}
	return (res * sign);
}
