#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: integer
 * @index: index
 *
 * Return: 1 if success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ind;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	ind = 1;
	ind = ind << index;
	ind = ~ind;
	*n = *n & ind;

	return (1);
}
