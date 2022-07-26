#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in mem
 * @str: string
 *
 * Return: pointer Null if fails
 */

char *_strdup(char *str)
{
	int len, x;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	arr = malloc(len *sizeof(char) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < len; x++)
	{
		arr[x] = str[x];
	}
	arr[x] = '\0';

	return (arr);
}
