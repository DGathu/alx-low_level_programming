#include "stdio.h"

/**
 * main - natural numbers of 3 and 5
 *
 *
 * Return: 0
 */

int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
