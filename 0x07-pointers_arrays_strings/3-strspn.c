#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: bytes
 */

unsigned int _strspn(char *s, *accept)
{
	int x = 0, y;
	int a = 0;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				a++;
				break;
			}
			if (accept[y + 1] == '\0' && s[x] != accept[y])
			{
				return (a);
			}
		}
		x++;
	}
	return (a);
}

