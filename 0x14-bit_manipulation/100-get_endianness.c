#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Returns: value stored
 */

int get_endianness(void)
{
	int x = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}
