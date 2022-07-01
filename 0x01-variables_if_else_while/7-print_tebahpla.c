#include<stdio.h>
/* more headers go there */
/**
 * main - prints alphabets
 *in reverse
 * Description: prints the alphabets
 *in reverse
 * Return: Always 0 (Success)
 */

/*betty style doc for function main goes there */
int main(void)
{
	int x;

	x = 122;

	while (x > 96)
	{
		putchar(x);
		x--;
	}
	putchar(10);
	return (0);
}
