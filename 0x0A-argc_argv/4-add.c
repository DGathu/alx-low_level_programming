#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - checks number
 * @s: input
 *
 * Return: if num
 */

int is_num(char *s)
{
	int x;

	x = 0;
	while (*(s + x) != '\0')
	{
		if (*(s + x) >= '0' && *(s + x) <= '9')
		{
			x++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - prints name of program
 * @argc: no of arguments
 * @argv: array of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, s, isnum;

	s = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		x = 1;
		while (x < argc)
		{
			isnum = is_num(argv[x]);
			if (isnum == 1)
			{
				s += atoi(argv[x]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			x++;
		}
		printf("%d\n", s);
	}
	return (0);
}
