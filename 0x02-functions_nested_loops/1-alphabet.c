#include "main.h"

/**
 * main - prints alphabet
 *
 * Description: print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar ('\n');
}
