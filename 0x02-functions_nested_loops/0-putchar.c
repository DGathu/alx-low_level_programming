#include <main.h>

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0
 */

int main(void)
{
	char text[10] = "_putchar";
	int x = 0;

	for (x=0; x < 8; x++)
	{
		_putchar(text[x]);
	}
	_putchar('\n');
	return (0);
}
