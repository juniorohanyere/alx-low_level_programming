#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - get function pointer of ops
 *		 of type char array that accepts
 *		 two integer inputs
 *
 * @s: character pointer to a symbol from the program argument
 *
 * Return: return one of the operator functions
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
