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
	{"_", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

int il;
for (il = 0; il < 5; il++)
{
	if (s && s[0] == ops[il].op[0] && !s[1])
	{
		return (ops[il].f);
	}
}
return (NULL);
}
