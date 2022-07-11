#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array
 * @a: array
 * @n: elements
 *
 * return: void
 */

void print_array(int *a, int n)
{
	int x, elem;

	x = 0;
	elem = 1;
	if (n < 0)
	{
		n = 0;
	}
	if (n > 0)
	{
		while (a[x] != '\0' && elem < n)
		{
			printf("%d, ", a[x]);
			x++;
			elem++;
		}
		printf("%d\n", a[x]);
	}
}
