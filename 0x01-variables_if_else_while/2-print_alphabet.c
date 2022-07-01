#include<stdio.h>
/* more headers go there */
/**
 * main - prints alphabets
 *
 * Description: prints the alphabets
 *
 * Return: Always 0 (Success)
 */

/*betty style doc for function main goes there */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
