#include "main.h"

/**
 * flip_bits - returns number of bits to flip number to another
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff;
	unsigned long int diff_b;

	diff = 0;
	diff_b = n ^ m;
	while (diff_b)
	{
		diff += diff_b & 1;
		diff_b = diff_b >> 1;
	}
	return (diff);
}
