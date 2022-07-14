#include "main.h"
#include <stdio.h>

/**
 * *cap_string - capitalizes string
 * @c: string
 *
 * Return: string
 */

char *cap_string(char *c)
{
	int x = 0;

	if (c[x] >= 'a' && c[x] <= 'z')
	{
		c[x] = c[x] - 'a' + 'A';
	}
	x++;
	while (c[x] != '\0')
	{
		if ((c[x] >= 'a' && c[x] <= 'z') &&
				(c[x - 1] == ',' ||
				 c[x - 1] == ';' ||
				 c[x - 1] == '.' ||
				 c[x - 1] == '!' ||
				 c[x - 1] == '?' ||
				 c[x - 1] == '"' ||
				 c[x - 1] == '(' ||
				 c[x - 1] == ')' ||
				 c[x - 1] == '{' ||
				 c[x - 1] == '}' ||
				 c[x - 1] == ' ' ||
				 c[x - 1] == '\t' ||
				 c[x - 1] == '\n'))
		{
			c[x] = c[x] - 'a' + 'A';
		}
		x++;
	}
	return (c);
}
