#include "main.h"
  
/**
 * int _islower - checks alphabet islower
 *
 * Description: checks alphabet islower
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

