#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _strlen - calculate length of string
 * @string: string
 *
 * Return: string length
 */

int _strlen(char *string)
{
	int x;

	for (x = 0; string[x] != '\0'; x++)
	{
		;
	}
	return (x);
}


/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int no, l, x, y;

	no = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (no < 0)
	{
		return (NULL);
	}
	if (no >= _strlen(s2))
	{
		no = _strlen(s2);
	}
	l = _strlen(s1) + no + 1;
	ptr = malloc(sizeof(*ptr) * l);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		ptr[x] = s1[x];
	}
	for (y = 0; y < no; y++)
	{
		ptr[x + y] = s2[y];
	}
	ptr[x + y] = '\0';

	return (ptr);
}
