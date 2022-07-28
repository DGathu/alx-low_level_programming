#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - allocates mem for array
 * @nmemb: no of members
 * @size: no of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int x;
	char *y;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}
	y = arr;

	for (x = 0; x < nmemb * size; x++)
	{
		y[x] = 0;
	}
	return (arr);
}
