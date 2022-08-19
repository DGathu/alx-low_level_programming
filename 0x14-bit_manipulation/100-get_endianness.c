#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: value stored
 */

int get_endianness(void)
{
	int x = 0x00000001;
	char *c = (char *)&x;

	return (c[0]);
}
