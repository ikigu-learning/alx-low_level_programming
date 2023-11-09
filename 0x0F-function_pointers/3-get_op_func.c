#include <stdlib.h>
#include "3-calc.h"

/**
  * get_op_func - determines which function to use
  * @s: the operand that determines function
  *
  * Return: pointer to function
  */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (i < 6)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}

	return (ops[i].f);
}

