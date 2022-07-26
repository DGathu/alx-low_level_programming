#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer Null if fails
 */

char *str_concat(char *s1, char *s2)
{
	int l1, l2, l3, x;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = 0;

	while (*(s1 + l1) != '\0')
	{
		l1++;
	}
	l2 = 0;

	while (*(s2 + l2) != '\0')
	{
		l2++;
	}
	l3 = l1 + l2;

	arr = (char *) malloc(l3 * sizeof(char) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < l1; x++)
	{
		arr[x] = s1[x];
	}
	for (x = 0; x < l2; x++)
	{
		arr[x + l1] = s2[x];
	}
	return (arr);
}
