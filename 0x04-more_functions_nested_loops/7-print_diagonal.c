#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of times
 * Return: void
 */

void print_diagonal(int n)
{
	int l = 0;
	int g;

	if (n > 0)
	{
		while (l < n)
		{
			for (g = 0; g < l; g++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
