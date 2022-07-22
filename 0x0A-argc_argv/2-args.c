#include "main.h"
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: no of arguments
 * @argv: array of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x++]);
	}
	return (0);
}

