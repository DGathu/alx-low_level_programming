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
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
