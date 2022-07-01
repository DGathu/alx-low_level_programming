#include<stdio.h>
/* more headers go there */
/**
 * main - prints alphabets
 *
 * Description: prints the alphabets up and lower
 *
 * Return: Always 0 (Success)
 */

/*betty style doc for function main goes there */
int main(void)
{
	int x, y;

	x = 97;
	y = 65;

	while (x < 123)
	{
		putchar(x);
		x++;
	}

	while (y < 91)
	{
		putchar(y);
		y++;
	}

	putchar(10);
	return (0);
}
