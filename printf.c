#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

#define TEST(...) \
printf("std: %d\n", printf(__VA_ARGS__)); \
printf("ft: %d\n", ft_printf(__VA_ARGS__)); \

int main(void)
{
	TEST("%c\n", 'a');
	TEST("%s\n", "hello world");
	TEST("%p\n", main);
	TEST("%d\n", INT_MIN);
	TEST("%i\n", INT_MIN);
	TEST("%u\n", UINT_MAX);
	TEST("%x\n", UINT_MAX);
	TEST("%X\n", UINT_MAX);
	TEST("hello %");
	TEST("%s\n", (char*)0);
	TEST("%p\n", (void*)0);
	TEST("abc %s %s %s def\n", "hello world",  "hello world",  "hello world");
}
