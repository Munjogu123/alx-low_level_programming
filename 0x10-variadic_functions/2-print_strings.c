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

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s%s", va_arg(ptr, char *), separator);
			else
				printf("%s", va_arg(ptr, char *));
		}
	}
	va_end(ptr);
	printf("\n");
}
