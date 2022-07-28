#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * *n: integer
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	ptr = malloc(n);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + n))
	{
		n++;
	}
	while (*(s2 + n))
	{
		n++;
	}
	n++;

	if (ptr == NULL)
	{
		return (NULL);
	}
	int x = 0;
       	int y = 0;
	while (x < n)
	{
		*(ptr + x) = *(s1 + x);
		x++;
	}
	while (y < n)
	{
		*(ptr + x) = *(s2 + y);
		x++;
		y++;
	}
	return (ptr);
}
