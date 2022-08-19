#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * @n: integer
 * @index: index
 * Return: 1 if success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ind;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	ind = 1;
	*n = *n | (ind << index);

	return (1);
}
