#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes to upper
 *
 * Return: String
 */

char *string_toupper(char *c)
{
	int x = 0;

	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] >= 'a' && c[x] <= 'z')
		{
			c[x] = c[x] - 'a' + 'A';
		}
	}
	return (c);
}
