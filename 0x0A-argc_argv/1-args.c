#include "main.h"
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: no of arguments
 * @argv: array of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
