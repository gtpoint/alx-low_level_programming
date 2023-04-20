#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - this function that Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator.
 *
 * Return: A pointer to the function.
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
	int i;

	i = 0;
	while (*(ops[i].op) != *s && ops[i].op != NULL)
		i++;

	return (ops[i].f);

}
