#include "main.h"
#define NULL 0
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0' && s[x] != c)
	{
		x++;
	}
	if (s[x] == c)
	{
		return (&s[x]);
	}
	else
	{
		return (NULL);
	}
}

