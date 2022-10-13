#include "3-calc.h"
#include <string.h>

/**
 * get_op_func- Is a pointer to a function
 * @s: character pointer argument
 *
 * Description- returns a pointer to a function that takes in two int arguments
 *
 * Return: Pointer to a function else NULL
 */

int (*get_op_func(char *s))(int, int)
{
	/* array of structs */
	op_t ops[] = {
		{ "+", op_add},
		{ "-", op_sub},
		{ "*", op_mul},
		{ "/", op_div},
		{ "%", op_mod},
		{ NULL, NULL}
	};
	int i;

	i = 0;
	while (i < sizeof(ops))
	{
		if (strcmp(s, ops[i].op) == 0 && s != NULL && ops[i].f != NULL)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);

}
