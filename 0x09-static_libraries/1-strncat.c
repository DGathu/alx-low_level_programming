#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings
 * @src: source char
 * @dest: dest char
 * @n: bytes from src
 *
 * Return: character
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y = 0;

	while (dest[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[y + x] = src[x];
	}
	dest[y + x] = '\0';
	return (dest);
}
