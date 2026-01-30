#include "test_mini_libc.h"
#include <unistd.h>

int	main(void)
{
	if (test_mini_strlen_base() == 0)
		puts("TEST strlen base OK");
	else
		puts("TEST strlen base KO");
	if (test_mini_memcpy_base() == 0)
		puts("TEST memcpy base OK");
	else
		puts("TEST memcpy base KO");
	if (test_mini_memset_base() == 0)
		puts("TEST memset base OK");
	else
		puts("TEST memset base KO");
	if (test_mini_bzero_base() == 0)
		puts("TEST bzero base OK");
	else
		puts("TEST bzero base KO");
	if (test_mini_memmove_base() == 0)
		puts("TEST memmove base OK");
	else
		puts("TEST memmove base KO");
	if (test_mini_memcmp_base() == 0)
		puts("TEST memcmp base OK");
	else
		puts("TEST memcmp base KO");
	if (test_mini_memchr_base() == 0)
		puts("TEST memchr base OK");
	else
		puts("TEST memchr base KO");
	if (test_mini_isdigit_base() == 0)
		puts("TEST isdigit base OK");
	else
		puts("TEST isdigit base KO");
	if (test_mini_isalpha_base() == 0)
		puts("TEST isalpha base OK");
	else
		puts("TEST isalpha base KO");
	if (test_mini_isalnum_base() == 0)
		puts("TEST isalnum base OK");
	else
		puts("TEST isalnum base KO");
	if (test_mini_isspace_base() == 0)
		puts("TEST isspace base OK");
	else
		puts("TEST isspace base KO");
	if (test_mini_strcpy_base() == 0)
		puts("TEST strcpy base OK");
	else
		puts("TEST strcpy base KO");
	if (test_mini_strncpy_base() == 0)
		puts("TEST strncpy base OK");
	else
		puts("TEST strncpy base KO");
	if (test_mini_strcmp_base() == 0)
		puts("TEST strcmp base OK");
	else
		puts("TEST strcmp base KO");
	if (test_mini_atoi_base() == 0)
		puts("TEST atoi base OK");
	else
		puts("TEST atoi base KO");
	if (test_mini_atol_base() == 0)
		puts("TEST atol base OK");
	else
		puts("TEST atol base KO");
	if (test_mini_strncmp_base() == 0)
		puts("TEST strncmp base OK");
	else
		puts("TEST strncmp base KO");
	if (test_mini_strchr_base() == 0)
		puts("TEST strchr base OK");
	else
		puts("TEST strchr base KO");
	if (test_mini_strrchr_base() == 0)
		puts("TEST strrchr base OK");
	else
		puts("TEST strrchr base KO");
	if (test_mini_strstr_base() == 0)
		puts("TEST strstr base OK");
	else
		puts("TEST strstr base KO");
	if (test_mini_strdup_base() == 0)
		puts("TEST strdup base OK");
	else
		puts("TEST strdup base KO");
	if (test_mini_strndup_base() == 0)
		puts("TEST strndup base OK");
	else
		puts("TEST strndup base KO");
	if (test_mini_word_count_base() == 0)
		puts("TEST word_count base OK");
	else
		puts("TEST word_count base KO");
	if (test_mini_substr_base() == 0)
		puts("TEST substr base OK");
	else
		puts("TEST substr base KO");
	if (test_mini_split_base() == 0)
		puts("TEST split base OK");
	else
		puts("TEST split base KO");
	if (test_mini_strcat_base() == 0)
		puts("TEST strcat base OK");
	else
		puts("TEST strcat base KO");
	if (test_mini_strncat_base() == 0)
		puts("TEST strncat base OK");
	else
		puts("TEST strncat base KO");
	test_mini_putstr_base();
	test_mini_putendl_base();
	test_mini_putnbr_base();
	return (0);
}
