#include <starg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all param
 * @n: no of paramaters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int x;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	sum = 0;
	for (x = 0; x < n; x++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
