#include "main.h"

/**
 * print_line - prints line
 * @n: length
 * Return: void
 */

void print_line(int n)
{
	int l = 0;

	while (l < n)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');
}
