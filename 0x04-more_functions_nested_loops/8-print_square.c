#include "main.h"

/**
 * print_square - prints square
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int l1;
	int l2;

	if (size > 0)
	{
		for (l1 = 0; l1 < size; l1++)
		{
			for (l2 = 0; l2 < size; l2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
