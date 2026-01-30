#include "mini_libc.h"

static size_t	mini_is_negative(const char *str, int *sign);

int	mini_atoi(const char *str)
{
	size_t	i;
	int	res;
	int	sign;

	if (!str)
		return (0);
	sign = 1;
	i = mini_is_negative(str, &sign);
	res = 0;
	if (mini_strcmp("-2147483648", str) == 0)
		return (-2147483648);
	while (mini_isdigit(str[i]))
	{
		if (res + '0' - str[i]  <= 2147483647)
			res += '0' - str[i];
		if (mini_isdigit(str[i + 1]) && res <= 214748364)
			res *= 10;
		i++;
	}
	return (res * -sign);
}

static size_t	mini_is_negative(const char *str, int *sign)
{
	if (*str == '-')
	{
		*sign = -1;
		return (1);
	}
	*sign = 1;
	return (0);
}
