#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separates numbers
 * @n: no of nos to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%d%s", va_arg(ptr, int), separator);
			else
				printf("%d", va_arg(ptr, int));
		}
	}
	va_end(ptr);
	printf("\n");
}
