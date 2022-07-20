#include "main.h"

/**
 * if_prime - checks if prime
 * @n: number
 * @div: divide
 *
 * Return: result
 */

int if_prime(int n, int div)
{
	if (n == div)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (if_prime(n, div + 1));
}

/**
 * is_prime_number - checks if prime
 * @n: number
 *
 * Return: result
 */

int is_prime_number(int n)
{
	int div = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (if_prime(n, div));
}
