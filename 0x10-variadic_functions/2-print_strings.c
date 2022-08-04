#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints string
 * @n: no of paramaters
 * @separator: char sep
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	char *y;

	if (n > 0)
	{
		va_start(list, n);
		for (x = 1; x <= n; x++)
		{
			y = va_arg(list, char *);
			if (y == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", y);
			}
			if (x != n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(list);
	}
	printf("\n");
}
