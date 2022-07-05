#include "stdio.h"

/**
 * main - prints fibonacci numbers
 *
 *
 * Return: 0
 */

int main(void)
{
	long int sum;
	long int one, two;
	int count;

	sum = 0;
	one = 0;
	two = 1;
	count = 0;

	while (count < 49)
	{
		sum = one + two;
		printf("%li, ", sum);
		one = two;
		two = sum;

		count++;
	}
	sum = one + two;
	printf("%li\n", sum);

	return (0);
}
