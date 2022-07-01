#include<stdio.h>
/* more headers go there */
/**
 * main - prints alphabets
 *
 * Description: prints the alphabets
 *except q and e
 * Return: Always 0 (Success)
 */

/*betty style doc for function main goes there */
int main(void)
{
	int x = 97;

	while (x < 123)
	{
		if (x != 101 && x != 113)
		{
			putchar(i);
		}
		x++;
	}
	putchar(10);
	return (0);
}
