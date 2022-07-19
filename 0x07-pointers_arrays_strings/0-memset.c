#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: constant byte
 * @n: bytes
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
