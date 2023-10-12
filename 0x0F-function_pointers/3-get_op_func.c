#include "3-calc.h"

/**
* get_op_func - returns 2 right op fun.
* @s: strin operat
* Return: function pointer
*/
int(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int lil = 0;
while (lil < 5)
{
	if (s && s[0] == ops[lil].op[0] && !s[1])
	{
		return (ops[lil].f);
	}
lil = lil + 1;
}

return (NULL);
}
