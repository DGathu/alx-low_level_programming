#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by newline
 * @separator: string sep
 * @n: no of integers
 *
 * Return: sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	if (n > 0)
	{
		va_start(list, n);
		for (x = 1; x <= n; x++)
		{
			printf("%d", va_arg(list, int));
			if (x != n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(list);
	}
	printf("\n");
}
