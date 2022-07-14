#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int h = n / 2;
	int l, r, x;

	n -= 1;

	for (x = 0; x < h; x++)
	{
		l = a[n - x];
		r = a[x];
		a[x] = l;
		a[n - x] = r;
	}
}
