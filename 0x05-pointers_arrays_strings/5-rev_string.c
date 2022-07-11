#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 *
 * return: void
 */

void rev_string(char *s)
{
	int x, f, h;
	char a, z;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	f = x - 1;
	h = f / 2;
	while (h >= 0)
	{
		a = s[f - h];
		z = s[h];
		s[h] = a;
		s[f - h] = z;
		h--;
	}
}
