#include "main.h"
#define NULL 0
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0, y, z;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[x] != '\0')
	{
		if (haystack[x] == needle[0])
		{
			z = x, y = 0;
			while (needle[y] != '\0')
			{
				if (haystack[z] == needle[y])
				{
					z++, y++;
				}
				else
				{
					break;
				}
			}
			if (needle[y] == '\0')
			{
				return (haystack + x);
			}
		}
		x++;
	}
	return (NULL);
}
