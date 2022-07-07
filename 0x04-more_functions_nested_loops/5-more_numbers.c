#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *i
 * Return: void
 */

void more_numbers(void)
{
	int l;
	int x;
	int t;
	int b;

	x = '0';
	t = 0;
	b = '9';

	for (l = 0; l < 10; l++)
	{
		while (t < 2)
		{
			while (x <= b)
			{
				if (b == '4')
				{
					_putchar('1');
				}
				_putchar(x);
				x++;
			}
			t++;
			b = '4';
			x = '0';
		}
		_putchar('\n');
		t = 0;
		x = '0';
		b = '9';
	}
}
