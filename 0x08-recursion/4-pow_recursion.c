#include "main.h"

/**
 * _pow_recursion - ret value of x raised to y
 * @x: value
 * @y: value to be raised to
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
