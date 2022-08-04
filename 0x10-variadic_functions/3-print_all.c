#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_string - prints string
 * @list: valist
 *
 */

void print_string(va_list list)
{
	char *y;

	y = va_arg(list, char *);

	if (y == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", y);
}

/**
 * print_float - prints float
 * @list: valist
 *
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_int - prints int
 * @list: valist
 *
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_char - prints char
 * @list: valist
 *
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_all - prints the above inputs
 * @format: list of arguments
 *
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int x, z = 0;
	va_list list;

	datatype choice[] = { 
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_start(list, format);

	while (format != NULL && format[z] != '\0')
	{
		x = 0;
		while (choice[x].letter != '\0')
		{
			if (choice[x].letter == format[z])
			{
				printf("%s", separator);
				choice[x].func(list);
				separator = ", ";
			}
			x++;
		}
		z++;
	}
	va_end(list);
	printf("\n");
}
