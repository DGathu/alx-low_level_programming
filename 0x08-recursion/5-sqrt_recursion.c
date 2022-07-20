#include "main.h"

/**
 * check_root - checks square root of n
 * @n: number
 * @root: check root
 *
 * Return: root
 */

int check_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (check_root(n, root + 1));
}

/**
 * _sqrt_recursion - returns natural square roor
 * @n: number
 *
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (check_root(n, 0));
}
