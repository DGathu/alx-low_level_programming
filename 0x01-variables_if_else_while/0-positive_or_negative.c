#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* more headers go there */
/**
 * main - determine if number is negative positive or zero
 *
 * Description: program assigns number
 *
 * Return: Always 0 (Success)
 */

/*betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
