#include "main.h"

/**
 * positive_or_negative - tests function is 
 * positive or negative
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	int i;

	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is postive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
