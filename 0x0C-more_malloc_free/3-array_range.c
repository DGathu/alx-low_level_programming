#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - creates array of integers
 * @min: min integer
 * @max: max integer
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr, sub, n, x;

	if (min > max)
	{
		return (NULL);
	}
	sub = max - min + 1;
	arr = malloc(sub * sizeof(int));

	if (arr = NULL)
	{
		return (NULL);
	}
	for (n = min, x = 0; n <= max && x < sub; n++, x++)
	{
		arr[x] = n;
	}
	return (arr);
}
