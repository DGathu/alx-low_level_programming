#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_mod - remainder
 * @x: integer 1
 * @y: integer 2
 *
 * Return: rem
 */

int op_mod(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (x % y);
}

/**
 * op_div - division
 * @x: integer 1
 * @y: integer 2
 *
 * Return: quotient
 */

int op_div(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (x / y);
}

/**
 * op_mul - multiplication
 * @x: integer 1
 * @y: integer 2
 *
 * Return: product
 */

int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_sub - subtraction
 * @x: integer 1
 * @y: integer 2
 *
 * Return: difference
 */

int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_add - addition
 * @x: integer 1
 * @y: integer 2
 *
 * Return: sum
 */

int op_add(int x, int y)
{
	return (x + y);
}


