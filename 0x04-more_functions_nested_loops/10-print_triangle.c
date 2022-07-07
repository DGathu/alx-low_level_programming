#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int l = 0;
	int #;
	int g;

	if (size > 0)
	{
		while (l < size)
		{
			for (g = size - 1; g > l; g++)
			{
				_putchar(' ');
			}
			for (# = 0; # < l + 1; #++)
			{
				_putchar('#');
			}
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
