#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates string
 * @n: no of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *s;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
