#include "main.h"
  
/**
 * _isdigit - checks if number
 * @c: character
 *
 * Return: 1 if success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
