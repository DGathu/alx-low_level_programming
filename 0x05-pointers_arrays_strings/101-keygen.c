#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random pass for 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int x;
	char y;

	srand(time(NULL));
	while (sum <= 2645)
	{
		y = rand() % 128;
		sum += y;
		putchar(y);
	}
	putchar(2772 - sum);
	return (0);
}
