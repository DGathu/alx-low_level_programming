#include "main.h"
  
/**
 * main - prints alphabet
 *
 * Description: a-z
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while(alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar ('\n');
}
