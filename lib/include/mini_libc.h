#ifndef _MINI_LIBC_H
#define _MINI_LIBC_H
#include <unistd.h>
#include <stdlib.h>
	unsigned int	mini_strlen(const char *str);
	void	mini_putstr(const char *str);
	void	mini_putstr_fd(int fd, const char *str);
	void	mini_putendl(const char *str);
	void	mini_putchar(char c);
	void	mini_putchar_fd(int fd,char c);
	void	mini_print_memory(const void *mem, size_t n);
	void	mini_print_memory_fd(int fd, const void *mem, size_t n);
	void	mini_print_clean_memory(const void *mem, size_t n, char *var);
	void	mini_print_clean_memory_fd(int fd, const void *mem, size_t n, char *var);
	void	*mini_memcpy(void *dest, const void* src, size_t n);
	void	*mini_memset(void *dest, int c, size_t n);
	void	mini_bzero(void *dest, size_t n);
	void	*mini_memmove(void *dest, const void *src, size_t n);
	int	mini_memcmp(const void *s1, const void *s2, size_t n);
	void	*mini_memchr(const void *src, int c, size_t n);
	void	*mini_memrchr(const void *src, int c, size_t n);
	int	mini_isdigit(int c);
	int	mini_isalpha(int c);
	int	mini_isalnum(int c);
	int	mini_isspace(int c);
	char	*mini_strcpy(char *dest, const char *src);
	char	*mini_strncpy(char *dest, const char *src, size_t n);
	char	*mini_strchr(const char *str, int c);
	char	*mini_strrchr(const char *str, int c);
	char	*mini_strstr(const char *s1, const char *s2);
	char	*mini_strdup(const char *str);
	char	*mini_strndup(const char *str, size_t n);
	char	*mini_strcat(char *dest, const char *src);
	char	*mini_strncat(char *dest, const char *src, size_t n);
	void	print_uhex_fd(int fd, unsigned long n, unsigned long max, int zero,
		char *digits);
	void	print_address_fd(int fd, const void *address);
	void	print_uchar_to_hex_fd(int fd, unsigned char c);
	int	mini_strcmp(const char *s1, const char *s2);
	int	mini_strncmp(const char *s1, const char *s2, size_t n);
	int	mini_atoi(const char *str);
	long	mini_atol(const char *str);
	void	mini_putnbr(int n);
	size_t	mini_word_count(const char *str, char sep);
	char	**mini_split(const char *str, char sep);
	void	mini_free_double_array(void **array, size_t size);
	char	*mini_substr(const char *str, unsigned int start, size_t len);
	size_t	mini_strlcpy(char *dest, const char *src, size_t size);
void	*mini_memccpy(void *dest, const void *src, int c, size_t n);
#endif
