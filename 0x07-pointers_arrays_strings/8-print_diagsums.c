#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals in matrix
 * @a: matrix
 * @size: size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		x += a[j];
	}
	for (i = 1; i <= size; i++)
	{
		j = (i * size) - i;
		y += a[j];
	}
	printf("%d, %d\n", x, y);
}
