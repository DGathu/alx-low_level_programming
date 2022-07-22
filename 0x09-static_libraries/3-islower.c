#include "main.h"

/**
 *  _islower - checks alphabet islower
 *
 * @c: alphas in ascii
 *
 * Return: 1 if lower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

