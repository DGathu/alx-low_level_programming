#include "main.h"
  
/**
 * main - prints alphabet
 *
 * Description: a-z
 *
 * Return: 0
 */

int main(void)
{
	int x;
	x = 97;

	while(x < 123)
	{
		_putchar(x);
		x++;
	}
	_putchar (10);
	return (0);
}
