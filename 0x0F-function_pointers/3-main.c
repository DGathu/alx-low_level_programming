#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs operations
 * @argv: arguments
 * @argc: number of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, z;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	z = op(x, y);

	printf("%d\n", z);
	return (0);
}
