#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: string
 *
 * return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
