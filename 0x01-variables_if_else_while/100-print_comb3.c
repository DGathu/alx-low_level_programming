#include<stdio.h>
/* more headers go there */
/**
 * main - prints digits
 *
 * Description: prints double digits
 *
 * Return: Always 0 (Success)
 */

/*betty style doc for function main goes there */
int main(void)
{
	int x, y;

	x = 48;
	y = 48;

	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			putchar(x);
			putchar(y);

			if (x < 56 || y < 57)
			{
				putchar(44);
				putchar(32);
			}
			y++;
		}
		x++;
	}
	putchar(10);
	return (0);
}
