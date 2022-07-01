#include<stdio.h>
/* more headers go there */
/**
 * main - prints hexes
 *
 * Description: prints the hexadecimal
 * numbers
 *
 * Return: Always 0 (Success)
 */

/*betty style doc for function main goes there */
int main(void)
{
	int x;

	x = 0;

	while (x < 48)
	{
		if (x < 10)
			putchar(x + '0');
		else if (x > 41)
			putchar(x - 10 + 'A');
		x++;
	}
	putchar(10);
	return (0);
}
