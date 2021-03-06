#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - copies str pointed by src
 * @dest: destination
 * @src: source
 * Description: copies string pointed by src into dest
 *
 * return: char cpy of string
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; *(src + x) != '\0'; x++)
	{
		dest[x] = *(src + x);
	}
	dest[x] = '\0';
	return (dest);
}
