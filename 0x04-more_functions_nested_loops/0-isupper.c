#include "main.h"

/**
 * _isupper - checks if uppercase
 * @c: character
 *
 * Return: 1 if success
 */

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
