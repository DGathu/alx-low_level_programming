#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps integer a and b
 * @a: integer pointer a
 * @b: integer pointer b
 *
 * return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
