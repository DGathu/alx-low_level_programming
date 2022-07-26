#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes with spec char
 * @size: sizeof array
 * @c: characters
 *
 * Return: pointer Null if fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int x = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	while (x < (int)size)
	{
		*(arr + x) = c;
		x++;
	}
	*(arr + x) = '\0';

	return (arr);
}
