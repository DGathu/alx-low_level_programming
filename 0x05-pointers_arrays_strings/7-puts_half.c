#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half string
 * @str: string
 *
 * return: void
 */

void puts_half(char *str)
{
	int x, y, f;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	f = x;
	y = f / 2;
	while (y <= f)
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
