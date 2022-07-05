#include "main.h"

/**
 * print_alphabet_x10 - prints alphabetx10
 *
 * Description: prints alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char alpha = 'a';

	while (times < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');

		times++;
	}
}
