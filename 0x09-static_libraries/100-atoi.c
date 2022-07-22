#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int x = 0;

	do {
		if (*s == '_')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			x = (x * 10) + (*s - '0');
		}
		else if (x > 0)
		{
			break;
		}
	}
	while (*s++);
	{
		return (x * sign);
	}
}
