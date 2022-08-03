#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function given as aparameter on array
 * @array: array
 * @size: size of array
 * @action: pointer to the function we need
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(*(array + x));
		}
	}
}
