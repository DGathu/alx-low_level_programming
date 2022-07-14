#include "main.h"
#include <stdio.h>

/**
 * *leet - encodes a string into 1337
 * @c: string
 *
 * Return: string
 */

char *leet(char *c)
{
	int x[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int y[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int a, b;

	for (b = 0; c[b] != '\0'; b++)
	{
		for (a = 0; x[a] != '\0'; a++)
		{
			if (c[b] == x[a])
			{
				c[b] = y[a];
			}
		}
	}
	return (c);
}
