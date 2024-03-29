#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: parameter for function pointer
 * @f: function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
