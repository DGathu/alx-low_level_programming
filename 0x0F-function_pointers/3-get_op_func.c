#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - operations
 * @s: operator
 *
 * Return: function pointer
 */

int (*get_op_func(char *s))(int, int)
{
	int a;

	op_t ops[] = {
		{"+", op-add},
		{"-", op-sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	a = 0;

	while (ops[a].op != NULL)
	{
		if (*ops[a].op == *s && s[1] == '\0')
		{
			return (ops[a].f);
		}
		a++;
	}
	return (NULL);
}
