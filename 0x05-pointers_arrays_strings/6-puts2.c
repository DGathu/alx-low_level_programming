#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints character of string
 * @str: string
 *
 * return: void
 */

void puts(char *str)
{
	int x;
	x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
