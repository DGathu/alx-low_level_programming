#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: string
 *
 * return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int x = 0;

	for (*s != '\0')
	{
		len++;
		x++;
	}
	x--;
	while (x >= 0)
	{
		_putchar(*s);
		x--;
	}
	_putchar('\n');
}
