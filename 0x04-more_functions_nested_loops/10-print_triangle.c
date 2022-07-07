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
	int h;
	int g;

	if (size > 0)
	{
		while (l < size)
		{
			for (g = size - 1; g > l; g++)
			{
				_putchar(' ');
			}
			for (h = 0; h < l + 1; h++)
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
