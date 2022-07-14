#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @src: source char
 * @dest: dest char
 *
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y = 0;

	while (dest[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y && src[x] != '\0'; x++)
	{
		dest[y + x] = src[x];
	}
	dest[y + x] = '\0';
	return (dest);
}
