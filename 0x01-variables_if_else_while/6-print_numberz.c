#include<stdio.h>
/* more headers go there */
/**
 * main - prints numbers
 *
 * Description: prints the single digits
 *
 * Return: Always 0 (Success)
 */

/*betty style doc for function main goes there */
int main(void)
{
	int x;

	x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}

