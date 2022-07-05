#include "main.h"

/**
 *  _isalpha - checks alpabet isalpha
 *
 * @c: alphas in ascii
 *
 * Return: 1 if alpha
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}